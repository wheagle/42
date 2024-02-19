/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:44:51 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/03 17:59:54 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "puzzle.h"
#include <stdio.h>

void	ft_write_int(int i_to_c);
void	ft_write_newline(void);

void	display_grid(t_puzzle *puzl)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < puzl->size)
	{	
		j = 0;
		while (j < puzl->size)
		{
			c = puzl->grid[i][j] + 48;
			write(1, &c, 1);
			j++;
			if (j == puzl->size)
			{
				write(1, "\n", 1);
			}
			else
				write(1, " ", 1);
		}
		i++;
	}
}
