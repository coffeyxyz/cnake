/* --- cnake ---
 *
 * Classic snake game, but with a c.
 *
 * Copyright (C) 2020 Robert Coffey
 * Licensed under the GNU GPLv2 */

#include <stdio.h>
#include <unistd.h>

#include "config.h"
#include "engine.h"

#define FRAMESLEEP(X) usleep(1000000/X)

int main(void)
{
    engine_setup();

    while (engine_step())
        FRAMESLEEP(FRAMERATE);

    printf("Gameover! Your final score was: %ld\n", engine_kill());
    return 0;
}
