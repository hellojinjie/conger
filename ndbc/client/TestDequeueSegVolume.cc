/*
 * DequeueMap.cpp
 *
 *  Created on: Oct 5, 2012
 *      Author: hellojinjie
 */

#include "common.h"
#include "MedusaClient.h"
#include "NMSTL/ptr"
#include "NMSTL/debug"
#include "TrafficOutputTuple.h"
#include <time.h>

BOREALIS_NAMESPACE_BEGIN

void pretty_print(SegementVolume tuple)
{
    INFO << "time: " << tuple.time << ", volume: " << tuple.volume
            << ", way: " << tuple.way << ", dir: " << tuple.dir
            << ", seg: " << tuple.seg;
}

Status handleOutput(ptr<StreamEvent> event)
{
    if (event->_stream == Name("segvol"))
    {
        uint32 offset = 0;
        int32 index;

        offset = 0;
        index = 0;

        // For each tuple that was received
        for (index = 0; index < event->_inserted_count; index++)
        {
            //offset += HEADER_SIZE;
            SegementVolume *tuple =
                    (SegementVolume *) &event->_bin_tuples[offset];
            offset += sizeof(SegementVolume);
            pretty_print(*tuple);
        }

    }
    else
    {
        //(DEBUG << (event->_stream.as_string()));
    }
    return Status(true);
}

class TestDequeueSegVolume
{
public:
    TestDequeueSegVolume()
    {

    }

    ptr<MedusaClient> medusaClient;

    void start()
    {
        medusaClient = ptr<MedusaClient>(new MedusaClient(InetAddress()));
        Status status;
        status = medusaClient->set_data_handler(
                InetAddress(
                        Util::form_endpoint("127.0.0.1:25000",
                                DEFAULT_MONITOR_PORT)), wrap(&handleOutput));
        DEBUG << status;

        //status = medusaClient->subscribe("outputstream");
        DEBUG << status;
        medusaClient->run();
    }

    ~TestDequeueSegVolume()
    {

    }
};

BOREALIS_NAMESPACE_END

int main()
{
    Borealis::TestDequeueSegVolume dequeue;
    dequeue.start();
}
