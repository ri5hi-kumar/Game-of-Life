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

The above code was part of the lab exercises for Practical C course of MITOCW

# Compilation
```
$ gcc -g -o0 -Wall lab1a.c lifegame.c -o lab1a.o
```
