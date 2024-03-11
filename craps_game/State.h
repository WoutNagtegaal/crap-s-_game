/*
 * State.h
 *
 *  Created on: 1 Mar 2024
 *      Author: woutn
 */

#ifndef STATE_H_
#define STATE_H_

#include "Context.h"
#include "Event.h"

class Context;

class State {
public:
	State();
	virtual ~State();

	virtual bool handleEvent(const Event & e, Context &c) = 0;
	virtual void doActivity() = 0;
	virtual void entryAction() = 0;
	virtual void exitAction() = 0;
};

#endif /* STATE_H_ */
