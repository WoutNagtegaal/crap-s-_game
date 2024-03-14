#include "Context.h"
#include "State.h"
#include "ConcreteStates.h"

#include <memory>
#include <thread>
#include <vector>
#include <array>
#include "types.h"
#include "Game.h"
#include "Logger.h"

int main() {
	const unsigned long long count = 1000;

	std::cout << "Choose output option: " << std::endl;
	std::cout << "To file: " << Logger::LOG_TO_FILE << std::endl;
	std::cout << "To console: " << Logger::LOG_TO_CONSOLE << std::endl;
	std::cout << "Enter: ";

	unsigned short selection = 0;
	std::cin >> selection;

	Logger::getInstance().setLogStrategy(static_cast<enum Logger::LogStrategies>(selection));

	std::array<std::thread, count> threads;
	Game g;
	for (unsigned long long i = 0; i < count; i++) {
		threads[i] = std::thread([]() {
			Game g;
			g.play();
		});
	}
	for (std::thread &t : threads) {
		t.join();
	}
	Logger::getInstance().logText("Finished");
}
