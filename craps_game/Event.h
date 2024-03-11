/*
 * Event.h
 *
 *  Created on: 1 Mar 2024
 *      Author: woutn
 */

#ifndef EVENT_H_
#define EVENT_H_

class Event {
public:
	Event(unsigned long long id);
	Event(const Event &rhs);

	unsigned long getId();

	Event& operator=(const Event &rhs);

	virtual ~Event();
private:
	unsigned long long id;
};

#endif /* EVENT_H_ */
