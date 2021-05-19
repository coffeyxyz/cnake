// Copyright (C) 2020 Robert Coffey
// Released under the GPLv2 license

#include <ncurses.h>

#include "config.h"
#include "screen.h"

void screen_setup(void)
{
	initscr();

	cbreak();
	noecho();
	nodelay(stdscr, true);
	curs_set(0);

	move(0,0);
	printw("Score: ");

	move(1,0);
	for (int i = 0; i < SCR_WIDTH+2; ++i) {
		addch('#');
	}
	move(SCR_HEIGHT+2, 0);
	for (int i = 0; i < SCR_WIDTH+2; ++i) {
		addch('#');
	}
	for (int i = 0; i < SCR_HEIGHT; ++i) {
		mvaddch(i+2, 0, '#');
		mvaddch(i+2, SCR_WIDTH+1, '#');
	}
}

void screen_update(char chars[SCR_HEIGHT][SCR_WIDTH], int score)
{
	move(0, 7);
	printw("%d", score);

	for (int row = 0; row < SCR_HEIGHT; ++row) {
		move(row+2, 1);
		for (int col = 0; col < SCR_WIDTH; ++col) {
			addch(chars[row][col]);
		}
	}

	refresh();
}

void screen_kill(void)
{
	endwin();
}
