#include "includes.h"

void engine_setup(void);
void engine_step(void);
void engine_kill(void);

static void grid_clear(void);
static void move_player(int direction);
static void create_food(int number);
