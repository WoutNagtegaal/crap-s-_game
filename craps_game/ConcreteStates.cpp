/*
 * ConcreteStates.cpp
 *
 *  Created on: 4 Mar 2024
 *      Author: woutn
 */

#include "ConcreteStates.h"

#include <iostream>
#include <memory>

#include "Logger.h"

GameState::GameState(Game &g) :
		g(g) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

GameState::~GameState() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

StartState::StartState(Game &g) :
		GameState(g) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

StartState::~StartState() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

bool StartState::handleEvent(const Event &e, Context &c) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
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
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void StartState::entryAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	g.rollDice();
}

void StartState::exitAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

LoseState::LoseState(Game &g) :
		GameState(g) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

LoseState::~LoseState() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

bool LoseState::handleEvent(const Event &e, Context &c) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	(void) e;
	(void) c;
	return true;
}

void LoseState::doActivity() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void LoseState::entryAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void LoseState::exitAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

WinState::WinState(Game &g) :
		GameState(g) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

WinState::~WinState() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

bool WinState::handleEvent(const Event &e, Context &c) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	(void) e;
	(void) c;
	return true;
}

void WinState::doActivity() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void WinState::entryAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void WinState::exitAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score4State::Score4State(Game &g) :
		GameState(g) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score4State::~Score4State() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

bool Score4State::handleEvent(const Event &e, Context &c) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
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
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void Score4State::entryAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	g.rollDice();
}

void Score4State::exitAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score5State::Score5State(Game &g) :
		GameState(g) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score5State::~Score5State() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

bool Score5State::handleEvent(const Event &e, Context &c) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
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
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void Score5State::entryAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	g.rollDice();
}

void Score5State::exitAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score6State::Score6State(Game &g) :
		GameState(g) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score6State::~Score6State() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

bool Score6State::handleEvent(const Event &e, Context &c) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
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
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void Score6State::entryAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	g.rollDice();
}

void Score6State::exitAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score8State::Score8State(Game &g) :
		GameState(g) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score8State::~Score8State() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

bool Score8State::handleEvent(const Event &e, Context &c) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
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
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void Score8State::entryAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	g.rollDice();
}

void Score8State::exitAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score9State::Score9State(Game &g) :
		GameState(g) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score9State::~Score9State() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

bool Score9State::handleEvent(const Event &e, Context &c) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
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
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void Score9State::entryAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	g.rollDice();
}

void Score9State::exitAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score10State::Score10State(Game &g) :
		GameState(g) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score10State::~Score10State() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

bool Score10State::handleEvent(const Event &e, Context &c) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
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
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void Score10State::entryAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	g.rollDice();
}

void Score10State::exitAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score11State::Score11State(Game &g) :
		GameState(g) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Score11State::~Score11State() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

bool Score11State::handleEvent(const Event &e, Context &c) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
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
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void Score11State::entryAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	g.rollDice();
}

void Score11State::exitAction() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}
