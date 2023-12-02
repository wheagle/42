/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:44:51 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/02 17:04:30 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "puzzle.h"
#include <stdio.h>

void	display_grid(t_puzzle *grid)
{
	int	i; //rows
	int	j; //cols
	char c;
	int k;
	int half_size;
	int row;
	int col;
	int pos;

	k = 0;
	half_size = grid->size / 2;

	while (k < grid->size * grid->size)
	{

		if (k < grid->size)
		{
			col = k % half_size;
			pos = k / half_size;
			c = grid->col_constraints[col][pos];
			write(1, &c, 1);
		}
		else
		{	
			row = (k - grid->size) % half_size;
			pos = (k - grid->size) / half_size;
			c = grid->row_constraints[row][pos];
			write(1, &c, 1);
		}
		k++;
		c += 48;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	
	i = 0;
//	printf("%d\n", grid->size);
	while (i < grid->size)
	{	
		j = 0;
		while (j < grid->size)
		{
			c = grid->grid[i][j] + 48;
			write(1, &c, 1);
			j++;
			if (j == grid->size)
			{
				write(1, "\n", 1);
			}
			else
				write(1, " ", 1);
		}
		i++;
	}
}
