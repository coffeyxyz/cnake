// SPDX-License-Identifier: GPL-2.0
// Copyright (C) 2020 Robert Coffey
/**
 * --- cnake ---
 *
 * Classic snake, but with a c.
 */

#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

#include "includes.h"
#include "engine.h"

#define FRAMESLEEP(X) usleep(1000000/X)

int main(int argc, char **argv)
{
    engine_setup();

    bool gameover = false;
    while (!gameover) {
        gameover = !engine_step();
        FRAMESLEEP(FRAMERATE);
    }

    int score = engine_kill();

    printf("Gameover! Your final score was: %d\n", score);

    return 0;
}
