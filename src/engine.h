// Copyright (C) 2020-2021 Robert Coffey
// Released under the GPLv2 license

#ifndef ENGINE_H
#define ENGINE_H

#include "config.h"

void engine_setup(void);
int engine_step(void);
unsigned long engine_kill(void);

#endif	// ENGINE_H
