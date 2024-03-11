/*
 * Dice.cpp
 *
 *  Created on: 26 Feb 2024
 *      Author: woutn
 */

#include "Dice.h"

#include <chrono>
#include <random>
#include <iostream>

Dice::Dice(diceyboy sides) :
		sides(sides) {
	this->roll();
}

Dice::diceyboy Dice::operator +(const Dice &rhs) const {
	return this->value + rhs.value;
}

Dice::~Dice() {
}

Dice::diceyboy Dice::getValue() const {
	return this->value;
}

bool Dice::operator ==(const Dice &rhs) const {
	return this->value == rhs.value;
}

Dice::diceyboy Dice::getSides() const {
	return this->sides;
}

void Dice::roll() {
#ifdef __MINGW32__
	static int seed =
			static_cast<int>(std::chrono::system_clock::now().time_since_epoch().count());
	static std::mt19937 gen(seed);
#else
	static std::random_device rd;
	static std::mt19937 gen(rd());
#endif
	std::uniform_int_distribution<diceyboy> dis(1, this->sides);
	this->value = dis(gen);
}

std::ostream& operator <<(std::ostream &os, const Dice &dice) {
	os << "Value: " <<static_cast<short>(dice.getValue()) << " Sides: "
			<< static_cast<short>(dice.getSides()) << std::endl;
	return os;
}

bool Dice::operator ==(unsigned int rhs) const {
	return this->value == rhs;
}
