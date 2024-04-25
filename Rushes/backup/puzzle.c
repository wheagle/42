/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:16:57 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/02 14:39:04 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "puzzle.h"

void populate_constraints(t_puzzle *grid, int *constraints);
void free_grid(t_puzzle *grid);

t_puzzle *initialize_grid(int size)
{
	int	i;
	int j;
	t_puzzle	*grid = (t_puzzle*)malloc(sizeof(t_puzzle));

	i = 0;
	j = 0;
	grid->size = size;
	grid->grid = (int**)malloc(size * sizeof(int*));

	while (i < size)
	{
		grid->grid[i] = (int*)malloc(size * sizeof(int));
		while (j < size)
		{
			grid->grid[i][j] = 0;
			j++;
		}

		i++;
	}

	//Set the input row and col values to the grid->row and col constraints.
	// order of constraints is col_up col_down row_left row_right
//	populate_constraints(grid, constraints);	

	return (grid);
}

void populate_constraints(t_puzzle *grid, int *constraints)
{
	int k;
	
	k = 0;
	while (k <= grid->size * grid->size)
	{
		if (k < grid->size / 2)
			grid->col_constraints[k % grid->size][k % 2] = constraints[k];
		else
			grid->row_constraints[k % grid->size][k % 2] = constraints[k];
		k++;
	}
}

void free_grid(t_puzzle *grid)
{
	int i;

	i = 0;
	while (i < grid->size)
	{
		free(grid->grid[i]);
		i++;
	}
	free(grid->grid);
	free(grid);
}
