/*
 * State.cpp
 *
 *  Created on: 1 Mar 2024
 *      Author: woutn
 */

#include "State.h"

#include <iostream>
#include "Logger.h"

State::State() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

State::~State() {
	Logger::getInstance().logText(__PRETTY_FUNCTION__);
}

