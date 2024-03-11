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

class WinState: public State {
public:
	WinState();
	virtual ~WinState();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score4State: public State {
public:
	Score4State();
	virtual ~Score4State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score5State: public State {
public:
	Score5State();
	virtual ~Score5State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score6State: public State {
public:
	Score6State();
	virtual ~Score6State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score8State: public State {
public:
	Score8State();
	virtual ~Score8State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score9State: public State {
public:
	Score9State();
	virtual ~Score9State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score10State: public State {
public:
	Score10State();
	virtual ~Score10State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score11State: public State {
public:
	Score11State();
	virtual ~Score11State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

#endif /* CONCRETESTATES_H_ */
