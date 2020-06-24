#include "includes.h"

void engine_setup(void);
bool engine_step(void);
void engine_kill(void);

static void grid_clear(void);
static void create_food(int number);
static void delete_food(int y_pos, int x_pos);

static bool is_solid(int y_pos, int x_pos);
static bool is_food(int y_pos, int x_pos);
