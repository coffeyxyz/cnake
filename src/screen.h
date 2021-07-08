#ifndef SCREEN_H
#define SCREEN_H

#include "config.h"

void screen_setup(void);
void screen_update(char chars[GRID_HEIGHT][GRID_WIDTH], int score);
void screen_kill(void);

#endif	// SCREEN_H
