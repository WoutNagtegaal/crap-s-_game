/*
 * ConcreteStates.cpp
 *
 *  Created on: 4 Mar 2024
 *      Author: woutn
 */

#include "ConcreteStates.h"

#include <iostream>
#include <memory>

StartState::StartState() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

StartState::~StartState() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool StartState::handleEvent(const Event &e, Context &c) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	if(e.getId() == 2) {
		c.setCurrentState(std::make_shared<LoseState>());
	}
	return true;
}

void StartState::doActivity() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void StartState::entryAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void StartState::exitAction() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

LoseState::LoseState() {
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
