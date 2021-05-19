// Copyright (C) 2020-2021 Robert Coffey
// Released under the GPLv2 license

#ifndef SCREEN_H
#define SCREEN_H

#include "config.h"

void screen_setup(void);
void screen_update(char chars[SCR_HEIGHT][SCR_WIDTH], int score);
void screen_kill(void);

#endif	// SCREEN_H
