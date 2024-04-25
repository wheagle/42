/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:44:51 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/02 14:34:01 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "puzzle.h"

void	display_grid(t_puzzle *grid)
{
	int	i; //rows
	int	j; //cols

	i = 0;

	while (i < grid->size)
	{	
		j = 0;
		while (j < grid->size)
		{
			write(1, &grid->grid[i][j], 1);
			j++;
			if (j == grid->size)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
		}
		i++;
	}
}
