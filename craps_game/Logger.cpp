/*
 * Logger.cpp
 *
 *  Created on: 8 Mar 2024
 *      Author: woutn
 */

#include "Logger.h"
#include <iostream>
#include <mutex>
#include <thread>

std::mutex locker;

void Logger::logText(const std::string &logtext) {
	std::lock_guard<std::mutex> guard(locker);
	l->log(logtext);
}

Logger& Logger::getInstance() {
	static Logger instance;
	return instance;
}

void Logger::logText(const std::stringstream &logtext) {
//	std::cout << "Now using a string stream:)" << std::endl;
	logText(logtext.str());
}

Logger::Logger(): currentStrategy(Logger::LOG_TO_CONSOLE) {
	l = std::make_unique<LogToConsole>();
}

Logger::~Logger() {
}

void Logger::setLogStrategy(enum LogStrategies logStrategy) {
	switch(logStrategy) {
	case LOG_TO_FILE:
		this->currentStrategy = logStrategy;
		this->l = std::make_unique<LogToFile>("output.txt");
		break;
	case LOG_TO_CONSOLE:
		this->currentStrategy = logStrategy;
		this->l = std::make_unique<LogToConsole>();
		break;
	case LOG_TO_NETWORK:
			this->currentStrategy = logStrategy;
			this->l = std::make_unique<LogToNetwork>();
			break;
	}
}

enum Logger::LogStrategies Logger::getLogStrategy() {
	return this->currentStrategy;
}
