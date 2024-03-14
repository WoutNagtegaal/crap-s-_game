/*
 * LogStrategy.h
 *
 *  Created on: 14 Mar 2024
 *      Author: woutn
 */

#ifndef LOGSTRATEGY_H_
#define LOGSTRATEGY_H_

#include <string>
#include <fstream>

class LogStrategy {
public:
	virtual ~LogStrategy() = default;
	virtual void log(const std::string &logtext) = 0;
};

class LogToConsole: public LogStrategy {
public:
	LogToConsole();
	virtual ~LogToConsole();

	virtual void log(const std::string &logtext);
};

class LogToFile: public LogStrategy {
public:
	LogToFile(const std::string &filename);
	virtual ~LogToFile();

	virtual void log(const std::string &logtext);
private:
	std::string filename;
	std::ofstream file;
};

#endif /* LOGSTRATEGY_H_ */
