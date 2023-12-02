/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:16:57 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/02 16:58:26 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "puzzle.h"
#include <stdio.h>

void populate_constraints(t_puzzle *grid, int *constraints);
void free_grid(t_puzzle *grid);

t_puzzle *initialize_grid(int size, int *constraints)
{
	int	i;
	int j;
	t_puzzle	*grid = (t_puzzle*)malloc(sizeof(t_puzzle));


	i = 0;
	grid->size = size;
	grid->grid = (int**)malloc(size * sizeof(int*));
	grid->col_constraints = (int**)malloc(size * sizeof(int*));
	grid->row_constraints = (int**)malloc(size * sizeof(int*));

	while (i < size)
	{
		grid->grid[i] = (int*)malloc(size * sizeof(int));
		j = 0;
		while (j < size)
		{
			grid->grid[i][j] = 0;
			j++;
		}

		i++;
	}

	//Set the input row and col values to the grid->row and col constraints.
	// order of constraints is col_up col_down row_left row_right
	populate_constraints(grid, constraints);	

	return (grid);
}

void populate_constraints(t_puzzle *grid, int *constraints)
{
	int k;
	int half_size;
	int col;
	int row;
	int pos;
	
	k = 0;
	half_size = grid->size / 2;
	grid->col_constraints[0] = (int*)malloc(grid->size * sizeof(int));
	grid->col_constraints[1] = (int*)malloc(grid->size * sizeof(int));
	grid->col_constraints[2] = (int*)malloc(grid->size * sizeof(int));
	grid->col_constraints[3] = (int*)malloc(grid->size * sizeof(int));
	grid->row_constraints[0] = (int*)malloc(grid->size * sizeof(int));
	grid->row_constraints[1] = (int*)malloc(grid->size * sizeof(int));
	grid->row_constraints[2] = (int*)malloc(grid->size * sizeof(int));
	grid->row_constraints[3] = (int*)malloc(grid->size * sizeof(int));
		
	while (k < grid->size * grid->size)
	{
//		printf("constraints[%d] = %d\n", k, constraints[k]);
//		printf("k mod grid->size = %d\n", k % grid->size);
//		printf("k mod 2 = %d\n", k % 2);

		if (k < grid->size)
		{
			col = k % half_size;
			pos = k / half_size;
			grid->col_constraints[col][pos] = constraints[k];
		}
		else
		{	
			row = (k - grid->size) % half_size;
			pos = (k - grid->size) / half_size;
			grid->row_constraints[row][pos] = constraints[k];
		}
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
