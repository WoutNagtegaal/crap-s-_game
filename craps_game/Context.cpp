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

void Context::scheduleEvent(const Event &e) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	events.push(e);
}

pointyboy Context::getCurrentState() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	return this->currentState;
}

void Context::setCurrentState(pointyboy currentState) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
	if (this->currentState) {
		this->currentState->exitAction();
	}
	this->currentState = currentState;
	this->currentState->entryAction();
	this->currentState->doActivity();
}

void Context::run() {
	for (; !events.empty(); events.pop()) {
		std::cout << events.front().getId() << ' ' << std::endl;
		currentState->handleEvent(events.front(), *this);
	}
}
