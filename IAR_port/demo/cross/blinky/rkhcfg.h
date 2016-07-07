/**
 * \cond
 *  --------------------------------------------------------------------------
 *
 *                                Framework RKH
 *                                -------------
 *
 * 	          State-machine framework for reactive embedded systems            
 * 	        
 * 	                    Copyright (C) 2010 Leandro Francucci.
 * 	        All rights reserved. Protected by international copyright laws.
 *
 *
 * 	RKH is free software: you can redistribute it and/or modify it under the 
 * 	terms of the GNU General Public License as published by the Free Software 
 * 	Foundation, either version 3 of the License, or (at your option) any 
 * 	later version.
 *
 *  RKH is distributed in the hope that it will be useful, but WITHOUT ANY 
 *  WARRANTY; without even the implied warranty of MERCHANTABILITY or 
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for 
 *  more details.
 *
 *  You should have received a copy of the GNU General Public License along 
 *  with RKH, see copying.txt file.
 *
 * 	Contact information:
 * 	RKH web site:	http://sourceforge.net/projects/rkh-reactivesys/
 * 	e-mail:			francuccilea@gmail.com
 *
 *  --------------------------------------------------------------------------
 *  File                     : rkhcfg.h
 *	Last updated for version : v2.4.04
 *	By                       : LF
 *  --------------------------------------------------------------------------
 *  \endcond
 *
 * 	\file
 *
 * 	\brief 		RKH user configuration
 */


#ifndef __RKHCFG_H__
#define __RKHCFG_H__


/**
 * 	Defines standard constants and macros.
 */

#include "rkhdef.h"


/* --- Configuration options related to framework ------------------------- */

/**
 *	Specify the maximum number of state machine applications (SMA) to be used 
 *	by the application (can be a number in the range [1..64]).
 */

#define RKH_MAX_SMA						2u

/**
 *	If the dynamic event support (see #RKH_EN_DYNAMIC_EVENT) is set to 1, RKH 
 *	allows to use event with parameters, defer/recall, allocating 
 *	and recycling dynamic events, among other features.
 */

#define RKH_EN_DYNAMIC_EVENT			RKH_DISABLED

/**
 *	If the dynamic event support is enabled (see #RKH_EN_DYNAMIC_EVENT) then 
 *	the #RKH_MAX_EPOOL can be used to specify the maximum number of fixed-size 
 *	memory block pools to be used by the application (can be a number in the 
 *	range [0..256]).
 *	Note that a value of 0 will completely suppress the memory pool services.
 */

#define RKH_MAX_EPOOL					0u

/**
 * 	Specify the size of the event signal. The valid values [in bits] are 
 * 	8, 16 or 32. Default is 8. The higher the signal size, the higher the 
 * 	event structure size and therefore more memory consumption.
 * 	See #RKHE_T data type.
 */

#define RKH_SIZEOF_EVENT				8u

/**
 *	Specify the maximum number of event signals to be used by the 
 *	application.
 */

#define RKH_MAX_SIGNALS					16u

/**
 * 	Specify the data type of event size. The valid values [in bits] are 
 * 	8, 16 or 32. Default is 8. See #RKHES_T, rkh_epool_register(), and 
 *	RKH_ALLOC_EVENT(). Use a 8 value if the bigger event size is minor to 
 *	256 bytes.
 */

#define RKH_SIZEOF_ESIZE				16u

/**
 *	If the #RKH_EN_DEFERRED_EVENT is set to 1 and the dynamic event support is 
 *	enabled (see #RKH_EN_DYNAMIC_EVENT), RKH enables the defer and recall 
 *	event features.
 */

#define RKH_EN_DEFERRED_EVENT			RKH_DISABLED

/**
 *	If the #RKH_ASSERT_EN is set to 0 the checking assertions are disabled.
 * 	In particular macros RKHASSERT(), RKHREQUIRE(), RKHENSURE(),
 * 	RKHINVARIANT(), and RKHERROR() do NOT evaluate the test condition
 * 	passed as the argument to these macros. One notable exception is the
 * 	macro RKHALLEGE(), that still evaluates the test condition, but does
 * 	not report assertion failures when the #RKH_ASSERT_EN is enabled.
 */

#define RKH_ASSERT_EN					RKH_ENABLED

/**
 *	If the #RKH_HK_DISPATCH_EN is set to 1, RKH will invoke the dispatch 
 *	hook function rkh_hk_dispatch() when dispatching an event to a SMA.
 *	When this is set the application must provide the hook function. 
 */

#define RKH_HK_DISPATCH_EN				RKH_DISABLED

/**
 *	If the #RKH_HK_SIGNAL_EN is set to 1, RKH will invoke the signal 
 *	hook function rkh_hk_signal() when the producer of an event directly 
 *	posts the event to the event queue of the consumer SMA.
 *	When this is set the application must provide the hook function. 
 */

#define RKH_HK_SIGNAL_EN				RKH_DISABLED

/**
 *	If the #RKH_HK_TIMEOUT_EN is set to 1, RKH will invoke the timeout 
 *	hook function rkh_hk_timeout() when a timer expires just before the 
 *	assigned event is directly posted into the state machine application 
 *	queue.
 *	When this is set the application must provide the hook function. 
 */

#define RKH_HK_TIMEOUT_EN				RKH_DISABLED

/**
 *	If the #RKH_HK_START_EN is set to 1, RKH will invoke the start 
 *	hook function rkh_hk_start() just before the RKH takes over control of 
 * 	the application.
 *	When this is set the application must provide the hook function. 
 */

#define RKH_HK_START_EN					RKH_ENABLED

/**
 *	If the #RKH_HK_EXIT_EN is set to 1, RKH will invoke the exit 
 *	hook function just before it returns to the underlying OS/RTOS. Usually, 
 *	the rkh_hk_exit() is useful when executing clean-up code upon SMA 
 *	terminate or framework exit.
 *	When this is set the application must provide the hook function. 
 */

#define RKH_HK_EXIT_EN					RKH_ENABLED

/**
 *	If the #RKH_HK_TIMETICK_EN is set to 1, RKH will invoke the time tick 
 *	hook function from rkh_tim_tick(), at the very beginning of that, to give 
 *	priority to user or port-specific code when the tick interrupt occurs. 
 *	Usually, the rkh_hk_timetick() allows to the application to extend the 
 *	functionality of RKH, giving the port developer the opportunity to add 
 *	code that will be called by rkh_tim_tick(). Frequently, the 
 *	rkh_hk_timetick() is called from the tick ISR and must not make any 
 *	blocking calls and must execute as quickly as possible.
 *	When this is set the application must provide the hook function. 
 */

#define RKH_HK_TIMETICK_EN				RKH_ENABLED

/**
 *	If the #RKH_SMA_EN_IEVENT is set to 1 then an initial event could be 
 *	be passed to state machine application when it starts, like an argc/argv. 
 *	Also, the #RKH_SMA_EN_IEVENT changes the initial action prototype.
 */

#define RKH_SMA_EN_IEVENT				RKH_DISABLED

/**
 * 	Specify the frequency of the framework tick interrupt (number of ticks 
 * 	in one second). It's the rate at which the rkh_tim_tick() function is 
 * 	invoked. This configuration constant is not used by RKH, it is just a 
 * 	value to allow an application to deal with time when using timer 
 * 	services, converting ticks to time. See RKH_TICK_RATE_MS constant.
 */

#define RKH_TICK_RATE_HZ				100u


/* --- Configuration options related to state machine applications -------- */

/**
 *	If the #RKH_SMA_EN_GET_INFO is set to 1 then RKH will include the 
 *	rkh_clear_info() and rkh_get_info() functions.
 */

#define RKH_SMA_EN_GET_INFO				RKH_DISABLED

/**
 *	If the #RKH_SMA_EN_PPRO is set to 1 then RKH allows to reference a event 
 *	preprocessor to any basic state. Aditionally, by means of single 
 *	inheritance in C it could be used as state's abstract data. 
 *	Moreover, implementing the single inheritance in C is very simply by 
 *	literally embedding the base type, #RKHPPRO_T in this case, as the first 
 *	member of the derived structure. See \a prepro member of #RKHST_T 
 *	structure for more information.
 */

#define RKH_SMA_EN_PPRO					RKH_DISABLED

/**
 *	If the #RKH_SMA_EN_HCAL is set to 1, the RKH allows state nesting. 
 *	When #RKH_SMA_EN_HCAL is set to 0 some important features of RKH are not 
 *	included: state nesting, composite state, history (shallow and deep) 
 *	pseudostate, entry action, and exit action.
 */

#define RKH_SMA_EN_HCAL					RKH_DISABLED

/**
 * 	Specify the maximum number of hierarchical levels. The smaller this 
 * 	number, the lower the RAM consumption. Typically, the most of hierarchical 
 * 	state machines uses up to 4 levels. Currently #RKH_SMA_MAX_HCAL_DEPTH cannot 
 * 	exceed 8.
 */

#define RKH_SMA_MAX_HCAL_DEPTH			2u

/**
 *	Specify the maximum number of linked transition segments. The smaller 
 *	this number, the lower the RAM consumption. Typically, the most of 
 *	hierarchical state machines uses up to 4 transition segments. 
 *	Currently #RKH_SMA_MAX_TRC_SEGS cannot exceed 8.
 */

#define RKH_SMA_MAX_TRC_SEGS			2u

/**
 *	If the #RKH_SMA_EN_PSEUDOSTATE is set to 1, the RKH allows pseudostates 
 *	usage.
 */

#define RKH_SMA_EN_PSEUDOSTATE			RKH_DISABLED

/**
 *	If the #RKH_SMA_EN_DEEP_HISTORY and #RKH_SMA_EN_PSEUDOSTATE are set to 1, 
 *	the RKH allows deep history pseudostate usage.
 */

#define RKH_SMA_EN_DEEP_HISTORY			RKH_DISABLED

/**
 *	If the #RKH_SMA_EN_SHALLOW_HISTORY and #RKH_SMA_EN_PSEUDOSTATE are set to 1, 
 *	the RKH allows shallow history pseudostate usage.
 */

#define RKH_SMA_EN_SHALLOW_HISTORY		RKH_DISABLED

/**
 *	If the #RKH_SMA_EN_CHOICE and #RKH_SMA_EN_PSEUDOSTATE are set to 1, the 
 *	RKH allows choice pseudostate usage.
 */

#define RKH_SMA_EN_CHOICE				RKH_DISABLED

/**
 *	If the #RKH_SMA_EN_CONDITIONAL and #RKH_SMA_EN_PSEUDOSTATE are set to 1, 
 *	the RKH allows branch (or conditional) pseudostate usage.
 */

#define RKH_SMA_EN_CONDITIONAL			RKH_DISABLED

/**
 *	If the #RKH_SMA_EN_SUBMACHINE and #RKH_SMA_EN_PSEUDOSTATE are set to 1, 
 *	the RKH allows submachine state (and exit/entry points) usage.
 */

#define RKH_SMA_EN_SUBMACHINE			RKH_DISABLED

/**
 *	If the #RKH_SMA_EN_TRC_SENDER and #RKH_TRC_EN are set to 1, 
 *	when posting an event the RKH inserts a pointer to the sender object.
 */

#define RKH_SMA_EN_TRC_SENDER			RKH_DISABLED


/* --- Configuration options related to SMA action featues ---------------- */

/**
 *	If the #RKH_SMA_EN_INIT_ARG_SMA is set to 1 then the initial action prototype 
 *	will add as argument a pointer to state machine structure #RKHSMA_T. See 
 *	#RKHINIT_T definition.
 */

#define RKH_SMA_EN_INIT_ARG_SMA			RKH_ENABLED

/**
 *	If the #RKH_SMA_EN_ENT_ARG_SMA is set to 1 then the entry action prototype 
 *	will add as argument a pointer to state machine structure #RKHSMA_T. See 
 *	#RKHENT_T definition.
 */

#define RKH_SMA_EN_ENT_ARG_SMA			RKH_ENABLED

/**
 *	If the #RKH_SMA_EN_EXT_ARG_SMA is set to 1 then the exit action prototype 
 *	will add as argument a pointer to state machine structure #RKHSMA_T. See 
 *	#RKHEXT_T definition.
 */

#define RKH_SMA_EN_EXT_ARG_SMA			RKH_ENABLED

/**
 *	If the #RKH_SMA_EN_ACT_ARG_SMA is set to 1 then the transition action 
 *	prototype will add as argument a pointer to state machine structure 
 *	#RKHSMA_T. See #RKHACT_T definition.
 */

#define RKH_SMA_EN_ACT_ARG_SMA			RKH_ENABLED

/**
 *	If the #RKH_SMA_EN_ACT_ARG_EVT is set to 1 then the transition action 
 *	prototype will add as argument a pointer to ocurred event. 
 *	See RKHACT_T definition.
 */

#define RKH_SMA_EN_ACT_ARG_EVT			RKH_ENABLED

/**
 *	If the #RKH_SMA_EN_GRD_ARG_EVT is set to 1 then the transition guard  
 *	prototype will add as argument a pointer to ocurred event. 
 *	See RKHGUARD_T definition.
 */

#define RKH_SMA_EN_GRD_ARG_EVT			RKH_ENABLED

/**
 *	If the #RKH_SMA_EN_GRD_ARG_SMA is set to 1 then the transition guard  
 *	prototype will add as argument a pointer to state machine structure 
 *	RKHSMA_T. See RKHGUARD_T definition.
 */

#define RKH_SMA_EN_GRD_ARG_SMA			RKH_ENABLED

/**
 *	If the #RKH_SMA_EN_PPRO_ARG_SMA is set to 1 then the event preprocessor  
 *	(Moore function like entry and exit actions) prototype will add as 
 *	argument a pointer to state machine structure 
 *	RKHSMA_T. See RKHPPRO_T definition.
 */

#define RKH_SMA_EN_PPRO_ARG_SMA			RKH_ENABLED	


/* --- Configuration options related to trace facility -------------------- */

/**
 *	If the #RKH_TRC_EN is set to 1 then RKH will include the trace facility.
 */

#define RKH_TRC_EN						RKH_ENABLED

/**
 *	If the #RKH_TRC_RUNTIME_FILTER is set to 1 then RKH will include the 
 *	runtime trace filter facility.
 * 	When #RKH_TRC_RUNTIME_FILTER is enabled RKH also will automatically 
 * 	define RKH_FILTER_ON_GROUP(), RKH_FILTER_OFF_GROUP(), 
 * 	RKH_FILTER_ON_EVENT(), RKH_FILTER_OFF_EVENT(), 
 * 	RKH_FILTER_ON_GROUP_ALL_EVENTS(), RKH_FILTER_OFF_GROUP_ALL_EVENTS(), 
 *	RKH_FILTER_ON_SMA(), and RKH_FILTER_OFF_SMA().
 * 	macros.
 */

#define RKH_TRC_RUNTIME_FILTER			RKH_ENABLED

/**
 *	If the #RKH_TRC_RUNTIME_FILTER and #RKH_TRC_RTFIL_SMA_EN are set to 1, 
 *	the RKH allows the usage of runtime trace filter for state machine 
 *	applications (active objects).
 */

#define RKH_TRC_RTFIL_SMA_EN			RKH_ENABLED

/**
 *	If the #RKH_TRC_RUNTIME_FILTER and #RKH_TRC_RTFIL_SIGNAL_EN are set to 1, 
 *	the RKH allows the usage of runtime trace filter for signals (events).
 */

#define RKH_TRC_RTFIL_SIGNAL_EN			RKH_ENABLED

/**
 *	If the #RKH_TRC_EN_USER_TRACE is set to 1 then RKH will allow to build  
 *	and generate tracing information from the application-level code. 
 *	This trace records are application-specific.
 *	
 */

#define RKH_TRC_EN_USER_TRACE			RKH_DISABLED

/**
 *	If the #RKH_TRC_ALL is set to 1 then RKH will include all its own trace 
 *	records.
 */

#define RKH_TRC_ALL						RKH_ENABLED

/**
 *	If the #RKH_TRC_EN_MP is set to 1 then RKH will include all trace records 
 *	related to the native fixed-size memory blocks.
 */

#define RKH_TRC_EN_MP					RKH_DISABLED

/**
 *	If the #RKH_TRC_EN_RQ is set to 1 then RKH will include all trace records 
 *	related to the native queues.
 */

#define RKH_TRC_EN_RQ					RKH_DISABLED

/**
 *	If the #RKH_TRC_EN_SMA is set to 1 then RKH will include all trace records 
 *	related to the state machine applications.
 */

#define RKH_TRC_EN_SMA					RKH_DISABLED

/**
 *	If the #RKH_TRC_EN_TIM is set to 1 then RKH will include all trace records 
 *	related to the native software timer.
 */

#define RKH_TRC_EN_TIM					RKH_ENABLED

/**
 *	If the #RKH_TRC_EN_SM is set to 1 then RKH will include all trace records 
 *	related to the state machine (hierarchical and "flat").
 */

#define RKH_TRC_EN_SM					RKH_ENABLED

/**
 *	If the #RKH_TRC_EN_FWK is set to 1 then RKH will include all trace records 
 *	related to the nativenative  event framework.
 */

#define RKH_TRC_EN_FWK					RKH_ENABLED

/**
 *	If the #RKH_TRC_EN_ASSERT and #RKH_TRC_EN_FWK are set to 1 then RKH will 
 *	include the "assertion" trace record.
 */

#define RKH_TRC_EN_ASSERT				RKH_ENABLED

/**
 *	If the #RKH_TRC_EN_SM_INIT and #RKH_TRC_EN_SM are set to 1 then RKH will 
 *	include the "init state machine" trace record.
 */

#define RKH_TRC_EN_SM_INIT				RKH_DISABLED

/**
 *	If the #RKH_TRC_EN_SM_DCH and #RKH_TRC_EN_SM are set to 1 then RKH will 
 *	include the "start a state machine" trace record.
 */

#define RKH_TRC_EN_SM_DCH				RKH_DISABLED

/**
 *	If the #RKH_TRC_EN_SM_CLRH and #RKH_TRC_EN_SM are set to 1 then RKH will 
 *	include the "dispatch an event to state machine" trace record.
 */

#define RKH_TRC_EN_SM_CLRH				RKH_DISABLED

/**
 *	If the #RKH_TRC_EN_SM_CLRH and #RKH_TRC_EN_SM are set to 1 then RKH will 
 *	include the "clear the history pseudostate" trace record.
 */

#define RKH_TRC_EN_SM_TRN				RKH_DISABLED

/**
 *	If the #RKH_TRC_EN_SM_STATE and #RKH_TRC_EN_SM are set to 1 then RKH will 
 *	include the "final state of transition" trace record.
 */

#define RKH_TRC_EN_SM_STATE				RKH_ENABLED

/**
 *	If the #RKH_TRC_EN_SM_CLRH and #RKH_TRC_EN_SM are set to 1 then RKH will 
 *	include the "entry state" trace record.
 */

#define RKH_TRC_EN_SM_ENSTATE			RKH_DISABLED

/**
 *	If the #RKH_TRC_EN_SM_CLRH and #RKH_TRC_EN_SM are set to 1 then RKH will 
 *	include the "exit state" trace record.
 */

#define RKH_TRC_EN_SM_EXSTATE			RKH_DISABLED

/**
 *	If the #RKH_TRC_EN_SM_CLRH and #RKH_TRC_EN_SM are set to 1 then RKH will 
 *	include the "number of entry and exit states in transition" trace record.
 */

#define RKH_TRC_EN_SM_NENEX				RKH_DISABLED

/**
 *	If the #RKH_TRC_EN_SM_CLRH and #RKH_TRC_EN_SM are set to 1 then RKH will 
 *	include the "number of executed actions in transition" trace record.
 */

#define RKH_TRC_EN_SM_NTRNACT			RKH_DISABLED

/**
 *	If the #RKH_TRC_EN_SM_CLRH and #RKH_TRC_EN_SM are set to 1 then RKH will 
 *	include the "state or pseudostate in a compound transition" trace record.
 */

#define RKH_TRC_EN_SM_TS_STATE			RKH_DISABLED

/**
 *	If the #RKH_TRC_EN_SM_CLRH and #RKH_TRC_EN_SM are set to 1 then RKH will 
 *	include the "returned code from dispatch function" trace record.
 */

#define RKH_TRC_EN_SM_PROCESS			RKH_DISABLED

/**
 *	If the #RKH_TRC_EN_NSEQ is set to 1 then RKH will add to the trace record an 
 *	incremental number (1-byte), used like a sequence number.
 *	See RKH_TRC_NSEQ() and RKH_TRC_HDR() macros.
 */

#define RKH_TRC_EN_NSEQ					RKH_ENABLED

/**
 *	If the #RKH_TRC_EN_CHK is set to 1 then RKH will add to the trace record a 
 *	checksum (1-byte). See RKH_TRC_CHK() macro.
 */

#define RKH_TRC_EN_CHK					RKH_ENABLED

/**
 *	If the #RKH_TRC_EN_TSTAMP is set to 1 then RKH will add to the trace record 
 *	a timestamp field. It's configurable by means of #RKH_TRC_SIZEOF_TSTAMP.
 */

#define RKH_TRC_EN_TSTAMP				RKH_ENABLED

/**
 *	Specify the maximum number of trace events in the stream. The smaller 
 *	this number, the lower the RAM consumption.
 */

#define RKH_TRC_SIZEOF_STREAM			128u


/* --- Configuration options related to queue (by reference) facility ----- */

/**
 *	If the #RKH_RQ_EN is set to 1 then RKH will include the native queue 
 *	facility.
 */

#define RKH_RQ_EN						RKH_ENABLED

/**
 * 	Specify the maximum number of elements that any queue can contain. 
 * 	The valid values [in bits] are 8, 16 or 32. Default is 8. 
 *	See #RKH_RQNE_T type.
 */

#define RKH_RQ_SIZEOF_NELEM				8u

/**
 *	If the #RKH_RQ_EN_GET_LWMARK is set to 1 then RKH allows to known the 
 * 	minimum number of free elements ever in the queue (low-watermark ). 
 * 	This provides valuable empirical data for proper sizing of the queue.
 * 	See rkh_rq_get_lwm() function.
 */

#define RKH_RQ_EN_GET_LWMARK			RKH_DISABLED

/**
 *	If the #RKH_RQ_EN_GET_INFO is set to 1 then RKH allows to collect and 
 *	retrives performance information for a particular queue.
 *	See rkh_rq_get_info() and rkh_rq_clear_info() functions.
 */

#define RKH_RQ_EN_GET_INFO				RKH_DISABLED

/**
 *	If the #RKH_RQ_EN_READ is set to 1 then RKH will include the rkh_rq_read() 
 *	function that allows read an element from a queue without remove it.
 *	See rkh_rq_read() function.
 */

#define	RKH_RQ_EN_READ					RKH_DISABLED

/**
 *	If the #RKH_RQ_EN_DEPLETE is set to 1 then RKH will include the 
 *	rkh_rq_deplete() function that empties the contents of the queue and 
 *	eliminates all stored elements.
 *	See rkh_rq_deplete() function.
 */

#define	RKH_RQ_EN_DEPLETE				RKH_DISABLED

/**
 *	If the #RKH_RQ_EN_IS_FULL is set to 1 then RKH will include the 
 *	rkh_rq_is_full() function that allows to known if a queue is full.
 *	See rkh_rq_is_full() function.
 */

#define	RKH_RQ_EN_IS_FULL				RKH_DISABLED

/**
 *	If the #RKH_RQ_EN_GET_NELEMS is set to 1 then RKH will include the 
 *	rkh_rq_get_num() function that returns the number of elements currently 
 *	in the queue.
 *	See rkh_rq_get_num() function.
 */

#define	RKH_RQ_EN_GET_NELEMS			RKH_DISABLED

/**
 *	If the #RKH_RQ_EN_PUT_LIFO is set to 1 then RKH will include the 
 *	rkh_rq_put_lifo() function that puts an element on a queue in a LIFO 
 *	manner.
 *	See rkh_rq_put_lifo() function.
 */

#define	RKH_RQ_EN_PUT_LIFO				RKH_DISABLED


/* --- Configuration options related to fixed-sized memory block facility - */

/**
 *	If the #RKH_MP_EN is set to 1 then RKH will include the native 
 *	fixed-size memory block management.
 */

#define RKH_MP_EN						RKH_DISABLED

/**
 *	If the #RKH_MP_EN is set to 1 then RKH will include the native 
 *	fixed-size memory block management.
 */

#define RKH_MP_REDUCED					RKH_DISABLED

/**
 * 	Specify the size of memory block size. The valid values [in bits] are 
 * 	8, 16 or 32. Default is 8. See #RKH_MPBS_T type.
 */

#define RKH_MP_SIZEOF_BSIZE				8u

/**
 * 	Specify size of number of memory block size. The valid values [in bits] 
 * 	are 8, 16 or 32. Default is 8. See #RKH_MPNB_T type.
 */

#define RKH_MP_SIZEOF_NBLOCK			8u

/**
 *	If the #RKH_MP_EN_GET_BSIZE is set to 1 then RKH will include the 
 *	rkh_mp_get_bsize() function that returns the size of memory block in 
 *	bytes. See rkh_mp_get_bsize() function.
 */

#define RKH_MP_EN_GET_BSIZE				RKH_DISABLED

/**
 *	If the #RKH_MP_EN_GET_NFREE is set to 1 then RKH will include the 
 *	rkh_mp_get_nfree() function that returns the current number of free 
 *	memory blocks in the pool.
 *	See rkh_mp_get_nfree() function.
 */

#define RKH_MP_EN_GET_NFREE				RKH_DISABLED

/**
 *	If the #RKH_MP_EN_GET_LWM is set to 1 then RKH will include the 
 *	rkh_mp_get_low_wmark() function that returns the lowest number of free 
 *	blocks ever present in the pool. This number provides valuable empirical 
 *	data for proper sizing of the memory pool.
 *	See rkh_mp_get_low_wmark() function.
 */

#define RKH_MP_EN_GET_LWM				RKH_DISABLED

/**
 *	If the #RKH_MP_EN_GET_INFO is set to 1 then RKH will include the 
 *	rkh_mp_get_info() function that retrieves performance information for 
 *	a particular memory pool. See rkh_mp_get_info() function.
 */

#define RKH_MP_EN_GET_INFO				RKH_DISABLED


/* --- Configuration options related to software timer facility ----------- */

/**
 *	If the #RKH_RQ_EN is set to 1 then RKH will include the native software 
 *	timer facility.
 */

#define RKH_TIM_EN						RKH_ENABLED

/**
 * 	Specify the dynamic range of the time delays measured in clock ticks 
 * 	(maximum number of ticks). The valid values [in bits] are 8, 16 or 32. 
 * 	Default is 8.
 */

#define RKH_TIM_SIZEOF_NTIMER			16u

/**
 *	If the #RKH_TIM_EN_HOOK is set to 1 then RKH will invoke a hook function 
 *	when a timer expires. When this is set the application must provide the 
 *	hook function. 
 */

#define RKH_TIM_EN_HOOK					RKH_DISABLED

/** 
 *	If the #RKH_TIM_EN_GET_INFO is set to 1 then RKH will include the 
 *	rkh_tim_get_info() function that retrieves performance information for 
 *	a particular software timer. See rkh_tim_get_info() function.
 */

#define RKH_TIM_EN_GET_INFO				RKH_DISABLED


#endif