/*
 * Context.cpp
 *
 *  Created on: 1 Mar 2024
 *      Author: woutn
 */

#include "Context.h"

#include <iostream>

Context::Context() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

Context::~Context() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

void Context::scheduleEvent() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

pointyboy Context::getCurrentState() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	return this->currentState;
}

void Context::setCurrentState(pointyboy currentState) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	if(this->currentState) {
		this->currentState->exitAction();
	}
	this->currentState = currentState;
	this->currentState->entryAction();
	this->currentState->doActivity();
}
