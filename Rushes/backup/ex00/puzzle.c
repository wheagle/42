/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:16:57 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/03 13:14:00 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "puzzle.h"
#include <stdio.h>
#include <unistd.h>

void populate_constraints(t_puzzle *puzl, int *constraints);
void free_grid(t_puzzle *puzl);
void ft_write_int(int i_to_c);
void ft_write_newline(void);

t_puzzle *initialize_grid(int size, int *constraints)
{
	int	i;
	int j;
	t_puzzle	*puzl = (t_puzzle*)malloc(sizeof(t_puzzle));


	i = 0;
	puzl->size = size;
	puzl->grid = (int**)malloc(size * sizeof(int*));
	puzl->col_con = (int**)malloc(size * sizeof(int*));
	puzl->row_con = (int**)malloc(size * sizeof(int*));

	while (i < size)
	{
		puzl->grid[i] = (int*)malloc(size * sizeof(int));
		j = 0;
		while (j < size)
		{
			puzl->grid[i][j] = 0;
			j++;
		}

		i++;
	}

	//Set the input row and col values to the puzl->row and col constraints.
	// order of constraints is col_up col_down row_left row_right
	populate_constraints(puzl, constraints);	

	return (puzl);
}

void populate_constraints(t_puzzle *puzl, int *constraints)
{
	int k;
	int half_size;
	int col;
	int row;
	int pos;
	
	k = 0;

	half_size = puzl->size / 2;

	while (k < puzl->size)
	{
		puzl->col_con[k] = (int*)malloc(puzl->size * sizeof(int));
		puzl->row_con[k] = (int*)malloc(puzl->size * sizeof(int));
		k++;
	}

	k = 0;
	while (k < (puzl->size * 4))
	{
//		write(1, "k is ", 5);
//		ft_write_int(k);
//		ft_write_newline();	
		if (k < (puzl->size * 2))
		{
			col = k / 2;
			pos = k % 2;
//			write(1, "Col: (", 6);
//			ft_write_int(col);
//			write(1, ", ", 2);
//			ft_write_int(pos);
//			write(1, ")", 1);
//			ft_write_newline();
			puzl->col_con[col][pos] = constraints[k];
		}
		else
		{	
			row = (k - (puzl->size * 2)) / 2;
			pos = k % 2;
//			write(1, "Row: (", 6);
//			ft_write_int(row);
//			write(1, ", ", 2);
//			ft_write_int(pos);
//			write(1, ")", 1);
//			ft_write_newline();
			puzl->row_con[row][pos] = constraints[k];
		}
//		write(1, "Constraint: ", 12);
		ft_write_int(constraints[k]);
//		ft_write_newline();
//		ft_write_newline();
//		ft_write_newline();	
		k++;
	}
	ft_write_newline();
}

void free_grid(t_puzzle *puzl)
{
	int i;

	i = 0;
	while (i < puzl->size)
	{
		free(puzl->grid[i]);
		i++;
	}
	free(puzl->grid);
	free(puzl);
}


