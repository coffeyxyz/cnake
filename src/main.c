#include "engine.h"

int main(int argc, char **argv)
{
	engine_setup();

	while (1)
	{
		engine_step();
	}

	engine_kill();

	return 0;
}
