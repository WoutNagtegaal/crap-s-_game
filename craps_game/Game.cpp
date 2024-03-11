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

Game::Game() {
}

Game::~Game() {
}

void Game::play() {
	pointyboy p = std::make_shared<StartState>(*this);
	this->setCurrentState(p);
	this->run();
}

void Game::rollDice() {
	this->scheduleEvent(Event(6));
	this->scheduleEvent(Event(8));

}
