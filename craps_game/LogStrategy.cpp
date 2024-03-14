/*
 * LogStrategy.cpp
 *
 *  Created on: 14 Mar 2024
 *      Author: woutn
 */

#include "LogStrategy.h"
#include <iostream>
#include <thread>

LogToConsole::LogToConsole() {
}

LogToConsole::~LogToConsole() {
}

void LogToConsole::log(const std::string &logtext) {
	std::cout << "Thread: " << std::this_thread::get_id() << " - ";
	std::cout << "Logger says: ";
	std::cout << logtext << std::endl;
}

LogToFile::LogToFile(const std::string &filename): filename(filename) {
	file.open(filename, std::ios::out);
}

LogToFile::~LogToFile() {
	file.close();
}

void LogToFile::log(const std::string &logtext) {
	if(!file.is_open()) {
		file.open(filename, std::ios::out);
	}
	file << "Thread: " << std::this_thread::get_id() << " - ";
	file << "Logger says: ";
	file << logtext << std::endl;
}
