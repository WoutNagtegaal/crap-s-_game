/*
 * Dice.h
 *
 *  Created on: 26 Feb 2024
 *      Author: woutn
 */

#ifndef DICE_H_
#define DICE_H_

#include <iostream>

class Dice {
public:
	typedef unsigned char diceyboy;

	Dice() = delete;
	explicit Dice(diceyboy sides);
	Dice(const Dice &other) = delete;

	void roll();

	diceyboy getValue() const;
	diceyboy getSides() const;

	Dice& operator=(const Dice &other) = delete;
	bool operator==(const Dice &rhs) const;
	bool operator==(unsigned int rhs) const;
	diceyboy operator+(const Dice &rhs) const;

	virtual ~Dice();

private:
	diceyboy sides;
	diceyboy value;
};

std::ostream& operator<<(std::ostream &os, const Dice &dice);

#endif /* DICE_H_ */
