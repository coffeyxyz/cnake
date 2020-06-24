#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>

#include "includes.h"
#include "engine.h"
#include "screen.h"

#define	MAXFOOD	5

struct Food {
	int y_pos;
	int x_pos;
	char symbol;
};

static struct {
	int y_pos;
	int x_pos;
} player = {0, 0};

static char grid[SHEIGHT][SWIDTH];
static struct Food *food_array[MAXFOOD];
static int food_array_ptr = 0;

void engine_setup(void)
{
	grid_clear();
	screen_setup();
}

void engine_step(void)
{
	grid_clear();

	int ch = getch();
	if (ch != ERR)
	{
		move_player(ch);
	}

	for (int i = 0; i < food_array_ptr; ++i)
	{
		struct Food *food_item = food_array[i];
		grid[food_item->y_pos][food_item->x_pos] = food_item->symbol;
	}
	grid[player.y_pos][player.x_pos] = '@';

	screen_update(grid);
	usleep(1000000/60);
}

void engine_kill(void)
{
	screen_kill();
}

static void grid_clear(void)
{
	for (int i = 0; i < SHEIGHT*SWIDTH; ++i)
	{
		grid[i/SWIDTH][i%SWIDTH] = ' ';
	}
}
                     
static void move_player(int direction)
{
	switch (direction)
	{
		case 'w' :
			if (player.y_pos > 0)
				player.y_pos -= 1;
			break;
		case 'd' :
			if (player.x_pos < SWIDTH-1)
				player.x_pos += 1;
			break;
		case 's' :
			if (player.y_pos < SHEIGHT-1)
				player.y_pos += 1;
			break;
		case 'a' :
			if (player.x_pos > 0)
				player.x_pos -= 1;
			break;
	}
}

static void create_food(int number)
{
	srand(player.x_pos * player.y_pos);

	for (int i = 0; i < number; ++i)
	{
		struct Food *food_item = (struct Food *)malloc(sizeof(struct Food));
		struct Food temp = {
			rand()%SHEIGHT,
			rand()%SWIDTH,
			'F'
		};
		*food_item = temp;
		food_array[food_array_ptr++] = food_item;
	}
}
