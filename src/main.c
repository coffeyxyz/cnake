#include <unistd.h>
#include <stdio.h>

#include "includes.h"
#include "engine.h"

int main(int argc, char **argv)
{
	engine_setup();

	bool gameover = false;
	while (!gameover)
	{
		gameover = !engine_step();
		usleep(1000000/5);
	}

	engine_kill();

	printf("Gameover!\n");

	return 0;
}
