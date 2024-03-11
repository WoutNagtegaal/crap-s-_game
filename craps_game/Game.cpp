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
#include "Logger.h"

#include <sstream>

Game::Game() :
		d1(Dice(6)), d2(Dice(6)) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
//	d1 = Dice(6);
//	d2 = Dice(6);
}

Game::~Game() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void Game::play() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	pointyboy p = std::make_shared<StartState>(*this);
	this->setCurrentState(p);
	this->run();
}

void Game::rollDice() {
	d1.roll();
	d2.roll();
	std::stringstream s;
	s << __PRETTY_FUNCTION__ << ": " << static_cast<long>(d1 + d2);
	Logger::getInstance().logText(s);
	this->scheduleEvent(Event(d1 + d2));
//	this->scheduleEvent(Event(10));
}

Game::Game(const Game &rhs): d1(Dice(6)), d2(Dice(6)) {
}
