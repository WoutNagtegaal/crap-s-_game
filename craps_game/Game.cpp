/*
 * Game.cpp
 *
 *  Created on: 8 Mar 2024
 *      Author: woutn
 */

#include "Game.h"
#include "ConcreteStates.h"
#include <memory>
#include "types.h"

Game::Game() :
		d1(Dice(6)), d2(Dice(6)) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
//	d1 = Dice(6);
//	d2 = Dice(6);
}

Game::~Game() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Game::play() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	pointyboy p = std::make_shared<StartState>(*this);
	this->setCurrentState(p);
	this->run();
}

void Game::rollDice() {
	d1.roll();
	d2.roll();
	std::cout << __PRETTY_FUNCTION__ << ": " << d1 + d2 << std::endl;
	this->scheduleEvent(Event(d1 + d2));
//	this->scheduleEvent(Event(10));
}

