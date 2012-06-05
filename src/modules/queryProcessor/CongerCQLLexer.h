/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : CongerCQL.g
 *     -                            On : 2012-04-23 13:41:59
 *     -                 for the lexer : CongerCQLLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer 
CongerCQLLexer

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pCongerCQLLexer, which is returned from a call to CongerCQLLexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 *
 * The methods in pCongerCQLLexer are  as follows:
 *
 *  - 
 void
      pCongerCQLLexer->KW_TRUE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_FALSE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_ALL(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_AND(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_OR(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_NOT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_LIKE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_IF(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_EXISTS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_ASC(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_DESC(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_ORDER(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_GROUP(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_BY(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_HAVING(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_WHERE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_FROM(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_AS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_SELECT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_DISTINCT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_OUTER(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_JOIN(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_LEFT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_RIGHT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_FULL(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_ON(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_PARTITION(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_USING(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_UNION(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_IS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_NULL(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_CREATE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_COLUMN(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_FIRST(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_AFTER(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_DESCRIBE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_TO(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_COMMENT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_BOOLEAN(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_INT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_BIGINT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_FLOAT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_DOUBLE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_DATE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_DATETIME(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_INTO(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_ROW(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_OUT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_OF(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_WITH(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_LIMIT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_SET(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_LONG(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_PLUS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_MINUS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_VIEW(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_IN(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_BEFORE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_BETWEEN(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_BOTH(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_BINARY(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_CROSS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_USE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_UPDATE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_SLIDE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_UNBOUNDED(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_NOW(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_ROWS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_EXCEPT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_LAST(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_DSTREAM(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_ISTREAM(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_RSTREAM(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_DIFFERENCE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_PASSING(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_VALUE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_DEFAULT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_XOR(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_DAY(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_DAYS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_SECOND(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_SECONDS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_HOUR(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_HOURS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_MINUTE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_MINUTES(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_MILLISECOND(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_MILLISECONDS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_MICROSECOND(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_MICROSECONDS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_NANOSECOND(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_NANOSECONDS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_DECODE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_NULLS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_INTERVAL(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_ELEMENT_TIME(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_COUNT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_SUM(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_AVG(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_MAX(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_MIN(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_INTERSECT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->KW_RANGE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->DOT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->COLON(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->COMMA(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->SEMICOLON(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->LPAREN(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->RPAREN(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->LSQUARE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->RSQUARE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->LCURLY(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->RCURLY(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->EQUAL(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->NOTEQUAL(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->LESSTHANOREQUALTO(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->LESSTHAN(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->GREATERTHANOREQUALTO(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->GREATERTHAN(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->DIVIDE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->PLUS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->MINUS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->STAR(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->MOD(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->DIV(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->AMPERSAND(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->TILDE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->BITWISEOR(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->BITWISEXOR(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->QUESTION(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->DOLLAR(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->CONCATENATE(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->Letter(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->HexDigit(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->Digit(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->Exponent(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->RegexComponent(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->StringLiteral(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->CharSetLiteral(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->Integer(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->Number(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->Identifier(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->CharSetName(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->WS(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->COMMENT(pCongerCQLLexer)
 *  - 
 void
      pCongerCQLLexer->Tokens(pCongerCQLLexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_CongerCQLLexer_H
#define _CongerCQLLexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct CongerCQLLexer_Ctx_struct CongerCQLLexer, * pCongerCQLLexer;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/** Context tracking structure for 
CongerCQLLexer

 */
struct CongerCQLLexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;

     void
     (*mKW_TRUE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_FALSE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_ALL)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_AND)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_OR)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_NOT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_LIKE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_IF)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_EXISTS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_ASC)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_DESC)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_ORDER)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_GROUP)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_BY)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_HAVING)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_WHERE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_FROM)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_AS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_SELECT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_DISTINCT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_OUTER)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_JOIN)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_LEFT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_RIGHT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_FULL)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_ON)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_PARTITION)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_USING)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_UNION)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_IS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_NULL)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_CREATE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_COLUMN)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_FIRST)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_AFTER)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_DESCRIBE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_TO)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_COMMENT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_BOOLEAN)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_INT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_BIGINT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_FLOAT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_DOUBLE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_DATE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_DATETIME)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_INTO)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_ROW)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_OUT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_OF)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_WITH)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_LIMIT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_SET)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_LONG)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_PLUS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_MINUS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_VIEW)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_IN)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_BEFORE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_BETWEEN)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_BOTH)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_BINARY)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_CROSS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_USE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_UPDATE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_SLIDE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_UNBOUNDED)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_NOW)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_ROWS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_EXCEPT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_LAST)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_DSTREAM)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_ISTREAM)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_RSTREAM)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_DIFFERENCE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_PASSING)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_VALUE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_DEFAULT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_XOR)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_DAY)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_DAYS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_SECOND)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_SECONDS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_HOUR)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_HOURS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_MINUTE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_MINUTES)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_MILLISECOND)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_MILLISECONDS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_MICROSECOND)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_MICROSECONDS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_NANOSECOND)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_NANOSECONDS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_DECODE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_NULLS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_INTERVAL)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_ELEMENT_TIME)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_COUNT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_SUM)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_AVG)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_MAX)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_MIN)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_INTERSECT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mKW_RANGE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mDOT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mCOLON)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mCOMMA)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mSEMICOLON)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mLPAREN)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mRPAREN)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mLSQUARE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mRSQUARE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mLCURLY)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mRCURLY)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mEQUAL)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mNOTEQUAL)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mLESSTHANOREQUALTO)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mLESSTHAN)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mGREATERTHANOREQUALTO)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mGREATERTHAN)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mDIVIDE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mPLUS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mMINUS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mSTAR)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mMOD)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mDIV)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mAMPERSAND)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mTILDE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mBITWISEOR)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mBITWISEXOR)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mQUESTION)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mDOLLAR)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mCONCATENATE)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mLetter)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mHexDigit)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mDigit)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mExponent)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mRegexComponent)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mStringLiteral)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mCharSetLiteral)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mInteger)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mNumber)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mIdentifier)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mCharSetName)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mWS)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mCOMMENT)	(struct CongerCQLLexer_Ctx_struct * ctx);

     void
     (*mTokens)	(struct CongerCQLLexer_Ctx_struct * ctx);
    const char * (*getGrammarFileName)();
    void            (*reset)  (struct CongerCQLLexer_Ctx_struct * ctx);
    void	    (*free)   (struct CongerCQLLexer_Ctx_struct * ctx);
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pCongerCQLLexer CongerCQLLexerNew         (
pANTLR3_INPUT_STREAM
 instream);
ANTLR3_API pCongerCQLLexer CongerCQLLexerNewSSD      (
pANTLR3_INPUT_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
lexer
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define AMPERSAND      4
#define BITWISEOR      5
#define BITWISEXOR      6
#define COLON      7
#define COMMA      8
#define COMMENT      9
#define CONCATENATE      10
#define CharSetLiteral      11
#define CharSetName      12
#define DIV      13
#define DIVIDE      14
#define DOLLAR      15
#define DOT      16
#define Digit      17
#define EQUAL      18
#define Exponent      19
#define GREATERTHAN      20
#define GREATERTHANOREQUALTO      21
#define HexDigit      22
#define Identifier      23
#define Integer      24
#define KW_AFTER      25
#define KW_ALL      26
#define KW_AND      27
#define KW_AS      28
#define KW_ASC      29
#define KW_AVG      30
#define KW_BEFORE      31
#define KW_BETWEEN      32
#define KW_BIGINT      33
#define KW_BINARY      34
#define KW_BOOLEAN      35
#define KW_BOTH      36
#define KW_BY      37
#define KW_COLUMN      38
#define KW_COMMENT      39
#define KW_COUNT      40
#define KW_CREATE      41
#define KW_CROSS      42
#define KW_DATE      43
#define KW_DATETIME      44
#define KW_DAY      45
#define KW_DAYS      46
#define KW_DECODE      47
#define KW_DEFAULT      48
#define KW_DESC      49
#define KW_DESCRIBE      50
#define KW_DIFFERENCE      51
#define KW_DISTINCT      52
#define KW_DOUBLE      53
#define KW_DSTREAM      54
#define KW_ELEMENT_TIME      55
#define KW_EXCEPT      56
#define KW_EXISTS      57
#define KW_FALSE      58
#define KW_FIRST      59
#define KW_FLOAT      60
#define KW_FROM      61
#define KW_FULL      62
#define KW_GROUP      63
#define KW_HAVING      64
#define KW_HOUR      65
#define KW_HOURS      66
#define KW_IF      67
#define KW_IN      68
#define KW_INT      69
#define KW_INTERSECT      70
#define KW_INTERVAL      71
#define KW_INTO      72
#define KW_IS      73
#define KW_ISTREAM      74
#define KW_JOIN      75
#define KW_LAST      76
#define KW_LEFT      77
#define KW_LIKE      78
#define KW_LIMIT      79
#define KW_LONG      80
#define KW_MAX      81
#define KW_MICROSECOND      82
#define KW_MICROSECONDS      83
#define KW_MILLISECOND      84
#define KW_MILLISECONDS      85
#define KW_MIN      86
#define KW_MINUS      87
#define KW_MINUTE      88
#define KW_MINUTES      89
#define KW_NANOSECOND      90
#define KW_NANOSECONDS      91
#define KW_NOT      92
#define KW_NOW      93
#define KW_NULL      94
#define KW_NULLS      95
#define KW_OF      96
#define KW_ON      97
#define KW_OR      98
#define KW_ORDER      99
#define KW_OUT      100
#define KW_OUTER      101
#define KW_PARTITION      102
#define KW_PASSING      103
#define KW_PLUS      104
#define KW_RANGE      105
#define KW_RIGHT      106
#define KW_ROW      107
#define KW_ROWS      108
#define KW_RSTREAM      109
#define KW_SECOND      110
#define KW_SECONDS      111
#define KW_SELECT      112
#define KW_SET      113
#define KW_SLIDE      114
#define KW_SUM      115
#define KW_TO      116
#define KW_TRUE      117
#define KW_UNBOUNDED      118
#define KW_UNION      119
#define KW_UPDATE      120
#define KW_USE      121
#define KW_USING      122
#define KW_VALUE      123
#define KW_VIEW      124
#define KW_WHERE      125
#define KW_WITH      126
#define KW_XOR      127
#define LCURLY      128
#define LESSTHAN      129
#define LESSTHANOREQUALTO      130
#define LPAREN      131
#define LSQUARE      132
#define Letter      133
#define MINUS      134
#define MOD      135
#define NOTEQUAL      136
#define Number      137
#define PLUS      138
#define QUESTION      139
#define RCURLY      140
#define RPAREN      141
#define RSQUARE      142
#define RegexComponent      143
#define SEMICOLON      144
#define STAR      145
#define StringLiteral      146
#define TILDE      147
#define TOK_AGGR      148
#define TOK_AGGR_DISTINCT      149
#define TOK_ARG_LIST      150
#define TOK_ARITH_EXPR      151
#define TOK_ATTR_LIST      152
#define TOK_BETWEEN      153
#define TOK_BINARY      154
#define TOK_COMPARE      155
#define TOK_COND      156
#define TOK_COND_LIST      157
#define TOK_CREATE_VIEW      158
#define TOK_FROM      159
#define TOK_FUNC      160
#define TOK_GROUP_BY      161
#define TOK_HAVING      162
#define TOK_IDSTREAM      163
#define TOK_JOIN      164
#define TOK_ORDER_BY      165
#define TOK_ORDER_EXPR      166
#define TOK_PARTITION      167
#define TOK_PROJTERM      168
#define TOK_PROJTERM_LIST      169
#define TOK_QUERY      170
#define TOK_RELATION_LIST      171
#define TOK_RELATION_VARIABLE      172
#define TOK_RSTREAM      173
#define TOK_SELECT      174
#define TOK_SFW      175
#define TOK_UNARY_COND      176
#define TOK_USING      177
#define TOK_WHERE      178
#define TOK_WINDOW      179
#define WS      180
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for CongerCQLLexer
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
