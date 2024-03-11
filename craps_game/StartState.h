/*
 * StartState.h
 *
 *  Created on: 1 Mar 2024
 *      Author: woutn
 */

#ifndef STARTSTATE_H_
#define STARTSTATE_H_

#include "State.h"

class StartState: public State {
public:
	StartState();
	virtual ~StartState();

	virtual bool handleEvent(Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

#endif /* STARTSTATE_H_ */
