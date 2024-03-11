/*
 * Event.cpp
 *
 *  Created on: 1 Mar 2024
 *      Author: woutn
 */

#include "Event.h"

Event::Event(unsigned long long id) :
		id(id) {
}

Event::Event(const Event &rhs) :
		id(rhs.id) {
}

unsigned long Event::getId() {
	return this->id;
}

Event& Event::operator=(const Event &rhs) {
	if(this != &rhs) {
		this->id = id;
	}
	return *this;
}

Event::~Event() {
}

