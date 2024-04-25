/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnunes, glicciar, lfrench                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:00:44 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/02 14:40:00 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "puzzle.h"


void free_grid(t_puzzle *grid);
t_puzzle *initialize_grid(int size);
int	parse_input(char *arg, int *size, int **memory_adress);
void	display_grid(t_puzzle *grid);

int	main(int argc, char *argv[])
{
	int	size;
	int stalled;
	int *constraints; //in format {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2}

	stalled = 0;
//	size = 4; //placeholder of grid size 4, delete this later.
	//function to parse the input
		//get size of puzzle
//	if (argc > 1 && argc < 3 && parse_input(argv[1], &size, &constraints))
//	{
		//initialize the puzzle
		t_puzzle *grid = initialize_grid(size);
		//parse input into puzzle
//	}
//	else //error out
//		return (1);


	//start the solving loop
	while (!stalled)
	{
		//constraints
		//each number can appear exactly once per row and column
		//can a number be placed without violating constraints
		//what kind of search to use?
		//update cell values
		//repeat

		//print the grid 
		display_grid(grid);

		stalled = 1; //exit after one loop for now.
	}
	//free the memory used by grid
	free_grid(grid);

}
