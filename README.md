# cnake

Snake game.


## Configure

There are several settings which can be adjusted within the src/includes.h
file.

The `SHEIGHT` and `SWIDTH` macros represent the size of the game grid.


## Installation

To install cnake, clone the repo and run make:
```
git clone https://github.com/foggynight/cnake
cd cnake
make
```


## Controls

- `WASD` - Turn the cnake
- `CTRL+S` - Freeze the terminal
- `CTRL+Q` - Unfreeze the terminal
- `CTRL+C` - Exit cnake


## Dependencies

1. GNU C Compiler
2. NCurses library

**NOTE:** The NCurses library is typically shipped with the GNU C Compiler.
