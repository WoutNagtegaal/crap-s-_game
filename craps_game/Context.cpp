/*
 * Context.cpp
 *
 *  Created on: 1 Mar 2024
 *      Author: woutn
 */

#include "Context.h"

#include <iostream>
#include "Logger.h"

Context::Context() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

Context::~Context() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

void Context::scheduleEvent(const Event &e) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	events.push(e);
}

pointyboy Context::getCurrentState() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	return this->currentState;
}

void Context::setCurrentState(pointyboy currentState) {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
	if (this->currentState) {
		this->currentState->exitAction();
	}
	this->currentState = currentState;
	this->currentState->entryAction();
	this->currentState->doActivity();
}

void Context::run() {
	for (; !events.empty(); events.pop()) {
//		std::cout << events.front().getId() << ' ' << std::endl;
		currentState->handleEvent(events.front(), *this);
	}
}
