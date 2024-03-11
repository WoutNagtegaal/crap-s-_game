#include "Context.h"
#include "State.h"
#include "StartState.h"
#include "LoseState.h"

#include <memory>
#include "types.h"

int main(int argc, char **argv) {
	Context c;
//	c.setCurrentState(std::make_shared<StartState>());
	pointyboy p = std::make_shared<StartState>();
	c.setCurrentState(p);
	p = std::make_shared<LoseState>();
	c.setCurrentState(p);
}
