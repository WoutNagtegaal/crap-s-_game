/*
 * LogStrategy.cpp
 *
 *  Created on: 14 Mar 2024
 *      Author: woutn
 */

#include "LogStrategy.h"
#include <iostream>
#include <thread>

#include "Network/Config.hpp"

#include "Network/Client.hpp"
#include "Network/MessageTypes.hpp"
#include "Network/Trace.hpp"

#define UWU_IP "10.42.0.1"
//#define UWU_IP "localhost"

LogToConsole::LogToConsole() {
}

LogToConsole::~LogToConsole() {
}

void LogToConsole::log(const std::string &logtext) {
	std::cout << "Thread: " << std::this_thread::get_id() << " - ";
	std::cout << "Logger says: ";
	std::cout << logtext << std::endl;
}

LogToFile::LogToFile(const std::string &filename) :
		filename(filename) {
	file.open(filename, std::ios::out);
}

LogToFile::~LogToFile() {
	file.close();
}

void LogToFile::log(const std::string &logtext) {
	if (!file.is_open()) {
		file.open(filename, std::ios::out);
	}
	file << "Thread: " << std::this_thread::get_id() << " - ";
	file << "Logger says: ";
	file << logtext << std::endl;
}

LogToNetwork::LogToNetwork() {
}

LogToNetwork::~LogToNetwork() {
}

/**
 * This handler just prints the returned message without doing anything.
 */
struct VoidResponseHandler: public Messaging::ResponseHandler {
	/**
	 * @see Messaging::ResponseHandler::handleResponse( const Message& aMessage)
	 */
	virtual void handleResponse(const Messaging::Message &aMessage) {
		FUNCTRACE_TEXT_DEVELOP(aMessage.asString());
	}
};
// struct ClientResponseHandler

void LogToNetwork::log(const std::string &logtext) {
	static Messaging::ResponseHandlerPtr responseHandler = std::make_shared<
			VoidResponseHandler>();
	static Messaging::Client client( UWU_IP, 12345, responseHandler);
	Messaging::Message message(Messaging::EchoRequest,
			logtext + " door de wouten");
	client.dispatchMessage(message);

	// The client has to start the io_service explicitly??
//	Messaging::CommunicationService::getCommunicationService().getIOContext().run();

	// Wait for the communication service to stop
//	Messaging::CommunicationService::getCommunicationService().wait();
}
