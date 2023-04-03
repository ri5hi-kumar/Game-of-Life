/*
 * lab1a.c
 *
 *  Created on:
 *      Author:
 */

/* include helper functions for game */
#include "lifegame.h"
#include <unistd.h>

/* add whatever other includes here */

/* number of generations to evolve the world */
#define NUM_GENERATIONS 50

/* functions to implement */

/* this function should set the state of all
   the cells in the next generation and call
   finalize_evolution() to update the current
   state of the world to the next generation */
void next_generation(void);

/* this function should return the state of the cell
   at (x,y) in the next generation, according to the
   rules of Conway's Game of Life (see handout) */
int get_next_state(int x, int y);

/* this function should calculate the number of alive
   neighbors of the cell at (x,y) */
int num_neighbors(int x, int y);

int main(int argc, char **argv)
{
	int n;

	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	// curs_set(0);
	timeout(300);

	WINDOW *win = newwin(LINES, COLS, 0, 0);
	clear();
	move(0, 0);
	
	/* TODO: initialize the world */
	if (argc > 1 && argv[1])
	{
		initialize_world_from_file(argv[1]);
	}
	else{
		initialize_world();
	}

	refresh();

	for (n = 0; n < NUM_GENERATIONS; n++){
		next_generation();
		output_world(stdscr);
		wrefresh(win);
		usleep(100000);
	}
		

	endwin();

	return 0;
}

void next_generation(void) {
	/* TODO: for every cell, set the state in the next
	   generation according to the Game of Life rules

	   Hint: use get_next_state(x,y) */
	for (int i = 0; i < get_world_width(); i++)
	{
		for (int j = 0; j < get_world_height(); j++)
		{
			set_cell_state(i, j, get_next_state(i , j));
		}
	}
	finalize_evolution(); /* called at end to finalize */
}

int get_next_state(int x, int y) {
	/* TODO: for the specified cell, compute the state in
	   the next generation using the rules

	   Use num_neighbors(x,y) to compute the number of live
	   neighbors */
	int alive_neighbors = num_neighbors(x, y);
	if (get_cell_state(x, y))
	{
		return (alive_neighbors == 2 || alive_neighbors == 3)?1:0;
	}
	else{
		return alive_neighbors == 3?1:0;
	}
	
}

int num_neighbors(int x, int y) {
	/* TODO: for the specified cell, return the number of
	   neighbors that are ALIVE

	   Use get_cell_state(x,y) */
	int alive_neighbors = 0;
	for (int i = x-1; i <= x+1; i++)
	{
		for (int j = y-1; j <= y+1; j++)
		{
			if (i == x && j == y)
			{
				continue;
			}
			if (get_cell_state(i, j))
			{
				alive_neighbors++;
			}
		}
	}
	return alive_neighbors;
}
