#include "Context.h"
#include "State.h"
#include "ConcreteStates.h"

#include <memory>
#include "types.h"

int main() {
	Context c;
//	c.setCurrentState(std::make_shared<StartState>());
	pointyboy p = std::make_shared<StartState>();
	c.setCurrentState(p);

	c.scheduleEvent(4);
	c.scheduleEvent(2);
	c.scheduleEvent(4);
	c.run();

}
