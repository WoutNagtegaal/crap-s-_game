/*
 * StartState.cpp
 *
 *  Created on: 1 Mar 2024
 *      Author: woutn
 */

#include "StartState.h"

#include <iostream>

StartState::StartState() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

StartState::~StartState() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool StartState::handleEvent(Context &c) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
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
