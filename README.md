# Game-of-Life
The Game of Life, invented by John Conway in 1970, is an example of a zero-player “game” known
as a cellular automaton. The game consists of a two-dimensional world extending inﬁnitely in all
directions, divided into “cells.” Each cell is either “dead” or “alive” at a given “generation.” The
game consists of a set of rules that describe how the cells evolve from generation to generation.
These rules calculate the state of a cell in the next generation as a function of the states of its
neighboring cells in the current generation. In a 2-D world, a cell’s neighbors are those 8 cells
vertically, horizontally, or diagonally adjacent to that cell. Conway’s set of rules are summarized
as:
1. A live cell with fewer than two live neighbors dies.
2. A live cell with more than three live neighbors also dies.
3. A live cell with exactly two or three live neighbors lives.
4. A dead cell with exactly three live neighbors becomes alive.

Some of the above code was given as part of the lab exercises for Practical C course of MITOCW. I completed the functions added ncurses to it for making it more alive.

# To install ncurses library
```
$ apt install libncurses5-dev
```

# Running
```
$ make
$ ./output
```

TODO: Removing collision with the boundary
