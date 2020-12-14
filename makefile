# Copyright (C) 2020 Robert Coffey
# Licensed under the GNU GPLv2

CC=gcc
LIBS=-lncurses

SRCS=$(wildcard src/*.c)
OBJS=$(SRCS:%.c=%.o)
PROG=cnake

all: $(OBJS)
	$(CC) $(OBJS) -o $(PROG) $(LIBS)

%.o: %.c
	$(CC) -c -o $@ $< $(LIBS)

.PHONY: clean
clean:
	rm -f src/*.o

.PHONY: uninstall
uninstall:
	rm -f src/*.o $(PROG)
