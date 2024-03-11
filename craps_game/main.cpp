#include "Context.h"
#include "State.h"
#include "ConcreteStates.h"

#include <memory>
#include "types.h"
#include "Game.h"

int main() {
	for (unsigned long long i = 0; i < 1; i++) {
		Game g;
		g.play();
	}
}
