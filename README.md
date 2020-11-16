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

- GNU C Compiler
- NCurses library

**Note:** The NCurses library is typically shipped with the GNU C Compiler.
