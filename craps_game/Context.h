/*
 * Context.h
 *
 *  Created on: 1 Mar 2024
 *      Author: woutn
 */

#ifndef CONTEXT_H_
#define CONTEXT_H_

#include <memory>

#include "State.h"
#include "types.h"

class State;

class Context {
public:
	Context();
	virtual ~Context();

	void scheduleEvent();
	pointyboy getCurrentState();
	void setCurrentState(pointyboy currentState);

private:
	pointyboy currentState;
};

#endif /* CONTEXT_H_ */
