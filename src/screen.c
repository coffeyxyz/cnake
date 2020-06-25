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

	/* Setting up wall. */
	move(0,0);
	for (int i = 0; i < SWIDTH+2; ++i)
	{
		addch('#');
	}
	move(SHEIGHT+1, 0);
	for (int i = 0; i < SWIDTH+2; ++i)
	{
		addch('#');
	}
	for (int i = 0; i < SHEIGHT; ++i)
	{
		mvaddch(i+1, 0, '#');
		mvaddch(i+1, SWIDTH+1, '#');
	}
}

void screen_update(char chars[SHEIGHT][SWIDTH])
{
	for (int row = 0; row < SHEIGHT; ++row)
	{
		move(row+1, 1);
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
