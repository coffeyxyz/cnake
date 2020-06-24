#include <ncurses.h>

#include "includes.h"
#include "screen.h"

void screen_setup(void)
{
	initscr();

	cbreak();
	noecho();
	nodelay(stdscr, true);
	curs_set(0);
}

void screen_update(char chars[SHEIGHT][SWIDTH])
{
	for (int row = 0; row < SHEIGHT; ++row)
	{
		move(row, 0);
		for (int col = 0; col < SWIDTH; ++col)
		{
			addch(chars[row][col]);
		}
	}

	refresh();
}

void screen_kill(void)
{
	endwin();
}
