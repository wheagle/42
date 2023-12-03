/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:06:00 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/03 17:27:18 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

int	check_adjacent_cell(t_puzzle *puzl, int gap, int num);
int	check_col_up(t_puzzle *puzl, int gap);
int	check_row_right(t_puzzle *puzl, int gap);
int	check_col_down(t_puzzle *puzl, int gap);
int	check_row_left(t_puzzle *puzl, int gap);
int	check_cell(t_puzzle *puzl, int gap);

int	solver(t_puzzle *puzl, int gap)
{
	int	num;

	if (gap == (puzl->size * puzl->size))
		return (1);
	num = 0;
	while (++num <= puzl->size)
	{
		if (check_adjacent_cell(puzl, gap, num) == 0)
		{
			puzl->grid[gap / puzl->size][gap % puzl->size] = num;
			if (check_cell(puzl, gap) == 0)
			{
				if (solver(puzl, gap + 1) == 1)
					return (1);
			}
			else
				puzl->grid[gap / puzl->size][gap % puzl->size] = 0;
		}
	}
	return (0);
}

int	check_adjacent_cell(t_puzzle *puzl, int gap, int num)
{
	int	i;

	i = 0;
	while (i < gap / puzl->size)
	{
		if (puzl->grid[i][gap % puzl->size] == num)
			return (1);
		i++;
	}
	i = 0;
	while (i < gap % puzl->size)
	{
		if (puzl->grid[gap / puzl->size][i] == num)
			return (1);
		i++;
	}
	return (0);
}

int	check_cell(t_puzzle *puzl, int gap)
{
	if (check_row_left(puzl, gap) == 1)
		return (1);
	if (check_row_right(puzl, gap) == 1)
		return (1);
	if (check_col_down(puzl, gap) == 1)
		return (1);
	if (check_col_up(puzl, gap) == 1)
		return (1);
	return (0);
}
