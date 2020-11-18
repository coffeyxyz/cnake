# cnake

Snake game.

## Installation

```bash
git clone https://github.com/foggynight/cnake
cd cnake
make
```

## Usage

cnake can be configured using the `src/includes.h` source file, be sure to
rebuild using `make` should you make any changes.

To play cnake, execute the `cnake` file.
```bash
./cnake
```

## Controls

- `WASD` - Turn the cnake
- `CTRL+S` - Freeze the terminal
- `CTRL+Q` - Unfreeze the terminal
- `CTRL+C` - Exit cnake

## Dependencies

- GNU C compiler
- NCurses library

**Note:** The NCurses library is typically shipped with the GNU C Compiler.

## License

Copyright (C) 2020 Robert Coffey

This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License version 2 as published by the Free
Software Foundation.

You should have received a copy of the GNU General Public License version 2
along with this program. If not, see <https://www.gnu.org/licenses/gpl-2.0>.
