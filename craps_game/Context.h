/*
 * Context.h
 *
 *  Created on: 1 Mar 2024
 *      Author: woutn
 */

#ifndef CONTEXT_H_
#define CONTEXT_H_

#include <memory>
#include <queue>

#include "State.h"
#include "types.h"
#include "Event.h"

class State;

class Context {
public:
	Context();
	virtual ~Context();

	void scheduleEvent(const Event &e);
	pointyboy getCurrentState();
	void setCurrentState(pointyboy currentState);

	void run();

private:
	pointyboy currentState;

	std::queue<Event> events;
};

#endif /* CONTEXT_H_ */
