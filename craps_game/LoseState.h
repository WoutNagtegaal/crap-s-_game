/*
 * LoseState.h
 *
 *  Created on: 1 Mar 2024
 *      Author: woutn
 */

#ifndef LOSESTATE_H_
#define LOSESTATE_H_

#include "State.h"

class LoseState: public State {
public:
	LoseState();
	virtual ~LoseState();

	virtual bool handleEvent(Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

#endif /* LOSESTATE_H_ */
