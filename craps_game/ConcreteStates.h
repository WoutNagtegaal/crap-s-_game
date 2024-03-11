/*
 * ConcreteStates.h
 *
 *  Created on: 4 Mar 2024
 *      Author: woutn
 */

#ifndef CONCRETESTATES_H_
#define CONCRETESTATES_H_

#include "State.h"

class GameState {
public:
	virtual ~GameState();
protected:
	GameState();

};

class StartState: public State {
public:
	StartState();
	virtual ~StartState();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class LoseState: public State {
public:
	LoseState();
	virtual ~LoseState();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

#endif /* CONCRETESTATES_H_ */
