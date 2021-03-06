/**
 * Enqueue.h
 *
 *  Created on: Sep 30, 2011
 *  Author: hellojinjie
 *  Email: hellojinjie%gmail.com
 */

#ifndef ENQUEUE_H_
#define ENQUEUE_H_

#include "common.h"
#include "NMSTL/debug"
#include "NMSTL/ptr"
#include "MedusaClient.h"
#include <list>
#include "StockTuple.h"

BOREALIS_NAMESPACE_BEGIN

class Enqueue
{

public:
	Enqueue();

	void start();
	void loadData();
	void sendPacket();

	virtual ~Enqueue();

private:
	ptr<MedusaClient> medusaClient;
	ptr<StreamEvent> eventPacket;
	list<StockInputTuple> data;
};

BOREALIS_NAMESPACE_END

#endif /* ENQUEUE_H_ */
