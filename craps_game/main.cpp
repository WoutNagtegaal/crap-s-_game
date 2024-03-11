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

void doSomeShit() {
	Game g;
	g.play();
}

int main() {
	const unsigned long long count = 50;

	std::array<std::thread, count> threads;
	Game g;
	for (unsigned long long i = 0; i < count; i++) {
		threads[i] = std::thread(&doSomeShit);
	}
	for(std::thread &t:threads) {
		t.join();
	}
	Logger::getInstance().logText("ehe");
}
