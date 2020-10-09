#include "includes.h"

void engine_setup(void);
int engine_step(void);
unsigned long engine_kill(void);

static void grid_clear(void);
static void create_food(int number);
static void delete_food(int y_pos, int x_pos);

static int is_solid(int y_pos, int x_pos);
static int is_snake(int y_pos, int x_pos);
static int is_food(int y_pos, int x_pos);
