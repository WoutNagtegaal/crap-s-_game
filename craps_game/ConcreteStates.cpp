/*
 * ConcreteStates.cpp
 *
 *  Created on: 4 Mar 2024
 *      Author: woutn
 */

#include "ConcreteStates.h"

#include <iostream>
#include <memory>

GameState::GameState(Game &g) :
		g(g) {
}

GameState::~GameState() {
}

StartState::StartState(Game &g) :
		GameState(g) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

StartState::~StartState() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool StartState::handleEvent(const Event &e, Context &c) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	switch (e.getId()) {
	case 2:
	case 3:
	case 12:
		c.setCurrentState(std::make_shared<LoseState>(g));
		break;
	case 7:
		c.setCurrentState(std::make_shared<WinState>(g));
		break;
	case 4:
		c.setCurrentState(std::make_shared<Score4State>(g));
		break;
	case 5:
		c.setCurrentState(std::make_shared<Score5State>(g));
		break;
	case 6:
		c.setCurrentState(std::make_shared<Score6State>(g));
		break;
	case 8:
		c.setCurrentState(std::make_shared<Score8State>(g));
		break;
	case 9:
		c.setCurrentState(std::make_shared<Score9State>(g));
		break;
	case 10:
		c.setCurrentState(std::make_shared<Score10State>(g));
		break;
	case 11:
		c.setCurrentState(std::make_shared<Score11State>(g));
		break;
	}
	return true;
}

void StartState::doActivity() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void StartState::entryAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	g.rollDice();
}

void StartState::exitAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

LoseState::LoseState(Game &g) :
		GameState(g) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

LoseState::~LoseState() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool LoseState::handleEvent(const Event &e, Context &c) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	(void) e;
	(void) c;
	return true;
}

void LoseState::doActivity() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void LoseState::entryAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void LoseState::exitAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

WinState::WinState(Game &g) :
		GameState(g) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

WinState::~WinState() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool WinState::handleEvent(const Event &e, Context &c) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	(void) e;
	(void) c;
	return true;
}

void WinState::doActivity() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void WinState::entryAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void WinState::exitAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score4State::Score4State(Game &g) :
		GameState(g) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score4State::~Score4State() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool Score4State::handleEvent(const Event &e, Context &c) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	switch (e.getId()) {
	case 4:
		c.setCurrentState(std::make_shared<WinState>(g));
		break;
	case 7:
		c.setCurrentState(std::make_shared<LoseState>(g));
		break;
	default:
		c.setCurrentState(std::make_shared<Score4State>(g));
	}
	return true;
}

void Score4State::doActivity() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score4State::entryAction() {
	g.rollDice();
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score4State::exitAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score5State::Score5State(Game &g) :
		GameState(g) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score5State::~Score5State() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool Score5State::handleEvent(const Event &e, Context &c) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	switch (e.getId()) {
	case 5:
		c.setCurrentState(std::make_shared<WinState>(g));
		break;
	case 7:
		c.setCurrentState(std::make_shared<LoseState>(g));
		break;
	default:
		c.setCurrentState(std::make_shared<Score5State>(g));
	}
	return true;
}

void Score5State::doActivity() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score5State::entryAction() {
	g.rollDice();
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score5State::exitAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score6State::Score6State(Game &g) :
		GameState(g) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score6State::~Score6State() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool Score6State::handleEvent(const Event &e, Context &c) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	switch (e.getId()) {
	case 6:
		c.setCurrentState(std::make_shared<WinState>(g));
		break;
	case 7:
		c.setCurrentState(std::make_shared<LoseState>(g));
		break;
	default:
		c.setCurrentState(std::make_shared<Score6State>(g));
	}
	return true;
}

void Score6State::doActivity() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score6State::entryAction() {
	g.rollDice();
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score6State::exitAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score8State::Score8State(Game &g) :
		GameState(g) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score8State::~Score8State() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool Score8State::handleEvent(const Event &e, Context &c) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	switch (e.getId()) {
	case 8:
		c.setCurrentState(std::make_shared<WinState>(g));
		break;
	case 7:
		c.setCurrentState(std::make_shared<LoseState>(g));
		break;
	default:
		c.setCurrentState(std::make_shared<Score8State>(g));
	}
	return true;
}

void Score8State::doActivity() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score8State::entryAction() {
	g.rollDice();
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score8State::exitAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score9State::Score9State(Game &g) :
		GameState(g) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score9State::~Score9State() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool Score9State::handleEvent(const Event &e, Context &c) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	switch (e.getId()) {
	case 9:
		c.setCurrentState(std::make_shared<WinState>(g));
		break;
	case 7:
		c.setCurrentState(std::make_shared<LoseState>(g));
		break;
	default:
		c.setCurrentState(std::make_shared<Score9State>(g));
	}
	return true;
}

void Score9State::doActivity() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score9State::entryAction() {
	g.rollDice();
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score9State::exitAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score10State::Score10State(Game &g) :
		GameState(g) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score10State::~Score10State() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool Score10State::handleEvent(const Event &e, Context &c) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	switch (e.getId()) {
	case 10:
		c.setCurrentState(std::make_shared<WinState>(g));
		break;
	case 7:
		c.setCurrentState(std::make_shared<LoseState>(g));
		break;
	default:
		c.setCurrentState(std::make_shared<Score10State>(g));
	}
	return true;
}

void Score10State::doActivity() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score10State::entryAction() {
	g.rollDice();
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score10State::exitAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score11State::Score11State(Game &g) :
		GameState(g) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Score11State::~Score11State() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool Score11State::handleEvent(const Event &e, Context &c) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	switch (e.getId()) {
	case 11:
		c.setCurrentState(std::make_shared<WinState>(g));
		break;
	case 7:
		c.setCurrentState(std::make_shared<LoseState>(g));
		break;
	default:
		c.setCurrentState(std::make_shared<Score11State>(g));
	}
	return true;
}

void Score11State::doActivity() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score11State::entryAction() {
	g.rollDice();
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Score11State::exitAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}
