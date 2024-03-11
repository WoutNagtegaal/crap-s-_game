/*
 * Game.h
 *
 *  Created on: 8 Mar 2024
 *      Author: woutn
 */

#ifndef GAME_H_
#define GAME_H_

#include "Context.h"
#include "Dice.h"

class Game: public Context {
public:
	Game();
	virtual ~Game();

	void play();
	void rollDice();

	void countWin();
	void countLoss();
private:
	Dice d1;
	Dice d2;
};

#endif /* GAME_H_ */
