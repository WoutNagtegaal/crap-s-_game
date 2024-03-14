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

#include "LogStrategy.h"
#include <memory>

class Logger {
public:
	enum LogStrategies {
		LOG_TO_FILE,
		LOG_TO_CONSOLE
	};


	Logger(const Logger &rhs) = delete;
	Logger& operator=(const Logger &rhs) = delete;

	void logText(const std::string &logtext);
	void logText(const std::stringstream &logtext);
	static Logger& getInstance();

	void setLogStrategy(enum LogStrategies logStrategy);
	enum LogStrategies getLogStrategy();

	virtual ~Logger();

private:
	enum LogStrategies currentStrategy;
	std::unique_ptr<LogStrategy> l;
	Logger();
};

#endif /* LOGGER_H_ */
