# cnake

Snake clone written in C, using ncurses.

## Configure

There are several settings which can be adjusted within the src/includes.h
file.

The `SHEIGHT` and `SWIDTH` macros represent the size of the game grid, the
terminal must be at least 3 characters taller and 2 characters wider than
these macros when the program is run.

## Installation

Once you've configured cnake, run the build file to create the cnake
executable within the cloned repository.
```
./build.sh
```

## Controls

`WASD` - Turn the cnake

`CTRL+S` - Freeze the terminal

`CTRL+Q` - Unfreeze the terminal

`CTRL+C` - Exit cnake

## Dependencies

1. GNU C Compiler

2. NCurses library

**NOTE:** The NCurses library is typically shipped with the GNU C Compiler.
