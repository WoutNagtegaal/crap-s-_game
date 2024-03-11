/*
 * LoseState.cpp
 *
 *  Created on: 1 Mar 2024
 *      Author: woutn
 */

#include "LoseState.h"

#include <iostream>

LoseState::LoseState() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

LoseState::~LoseState() {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
}

bool LoseState::handleEvent(Context &c) {
	std::cout << __PRETTY_FUNCTION__ << std::endl;
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
