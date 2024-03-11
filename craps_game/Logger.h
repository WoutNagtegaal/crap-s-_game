/*
 * Logger.h
 *
 *  Created on: 8 Mar 2024
 *      Author: woutn
 */

#ifndef LOGGER_H_
#define LOGGER_H_

#include <string>
#include <sstream>

class Logger {
public:
	Logger(const Logger &rhs) = delete;
	Logger& operator=(const Logger &rhs) = delete;

	void logText(const std::string &logtext);
	void logText(const std::stringstream &logtext);
	static Logger& getInstance();

	virtual ~Logger();

private:
	Logger();
};

#endif /* LOGGER_H_ */
