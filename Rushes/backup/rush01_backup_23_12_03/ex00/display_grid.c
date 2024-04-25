/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_grid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:44:51 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/03 13:12:43 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "puzzle.h"
#include <stdio.h>

void	ft_write_int(int i_to_c);
void ft_write_newline(void);

void	display_grid(t_puzzle *puzl)
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
//	half_size = puzl->size / 2;

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
///			ft_write_int(col);
//			write(1, ", ", 2);
//			ft_write_int(pos);
//			write(1, ")", 1);
//			ft_write_newline();
			c = puzl->col_con[col][pos];
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
			c = puzl->row_con[row][pos];
		}
		c += 48;
		write(1, &c, 1);
//		write(1, "Constraint: ", 12);
//		ft_write_int(constraints[k]);
//		ft_write_newline();
//		ft_write_newline();
//		ft_write_newline();	
		k++;
	}
/*while (k < (puzl->size * puzl->size) - 1)
	{

		if (k < (puzl->size * 2))
		{
			col = k % half_size;
			pos = k / half_size;
			c = puzl->col_con[col][pos];
			write(1, &c, 1);
		}
		else
		{	
			row = (k - puzl->size) % half_size;
			pos = (k - puzl->size) / half_size;
			c = puzl->row_con[row][pos];
			write(1, &c, 1);
		}
		k++;
		c += 48;
		write(1, &c, 1);
	}*/
	write(1, "\n", 1);
	
	i = 0;
//	printf("%d\n", puzl->size);
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
