// SPDX-License-Identifier: GPL-2.0
// Copyright (C) 2020 Robert Coffey

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
    for (int i = 0; i < SWIDTH+2; ++i) {
        addch('#');
    }
    move(SHEIGHT+2, 0);
    for (int i = 0; i < SWIDTH+2; ++i) {
        addch('#');
    }
    for (int i = 0; i < SHEIGHT; ++i) {
        mvaddch(i+2, 0, '#');
        mvaddch(i+2, SWIDTH+1, '#');
    }
}

void screen_update(char chars[SHEIGHT][SWIDTH], int score)
{
    move(0, 7);
    printw("%d", score);

    for (int row = 0; row < SHEIGHT; ++row) {
        move(row+2, 1);
        for (int col = 0; col < SWIDTH; ++col) {
            addch(chars[row][col]);
        }
    }

    refresh();
}

void screen_kill(void)
{
    endwin();
}
