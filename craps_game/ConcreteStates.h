/*
 * ConcreteStates.h
 *
 *  Created on: 4 Mar 2024
 *      Author: woutn
 */

#ifndef CONCRETESTATES_H_
#define CONCRETESTATES_H_

#include "State.h"
#include "Game.h"
#include <memory>

class GameState: public State {
public:
	virtual ~GameState();
protected:
	GameState(Game &g);
	Game &g;

};

class StartState: public GameState {
public:
	StartState(Game &g);
	virtual ~StartState();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class LoseState: public GameState {
public:
	LoseState(Game &g);
	virtual ~LoseState();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class WinState: public GameState {
public:
	WinState(Game &g);
	virtual ~WinState();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score4State: public GameState {
public:
	Score4State(Game &g);
	virtual ~Score4State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score5State: public GameState {
public:
	Score5State(Game &g);
	virtual ~Score5State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score6State: public GameState {
public:
	Score6State(Game &g);
	virtual ~Score6State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score8State: public GameState {
public:
	Score8State(Game &g);
	virtual ~Score8State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score9State: public GameState {
public:
	Score9State(Game &g);
	virtual ~Score9State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score10State: public GameState {
public:
	Score10State(Game &g);
	virtual ~Score10State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

class Score11State: public GameState {
public:
	Score11State(Game &g);
	virtual ~Score11State();

	virtual bool handleEvent(const Event &e, Context &c);
	virtual void doActivity();
	virtual void entryAction();
	virtual void exitAction();
};

#endif /* CONCRETESTATES_H_ */
