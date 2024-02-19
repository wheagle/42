/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_checks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:18:31 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/03 17:27:43 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

int	check_col_up(t_puzzle *puzl, int gap);
int	check_row_right(t_puzzle *puzl, int gap);
int	check_col_down(t_puzzle *puzl, int gap);
int	check_row_left(t_puzzle *puzl, int gap);
int	check_cell(t_puzzle *puzl, int gap);

int	check_col_up(t_puzzle *puzl, int gap)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (gap / puzl->size == (puzl->size - 1))
	{
		while (i < puzl->size)
		{
			if (puzl->grid[i][gap % puzl->size] > max)
			{
				max = puzl->grid[i][gap % puzl->size];
				count++;
			}
			i++;
		}
		if (puzl->constraints[gap % puzl->size] != count)
			return (1);
	}
	return (0);
}

int	check_row_right(t_puzzle *puzl, int gap)
{
	int	i;
	int	max_size;
	int	visible_towers;
	int	size;

	i = puzl->size;
	size = puzl->size;
	max_size = 0;
	visible_towers = 0;
	if (gap % puzl->size == (puzl->size - 1))
	{
		while (--i >= 0)
		{
			if (puzl->grid[gap / puzl->size][i] > max_size)
			{
				max_size = puzl->grid[gap / puzl->size][i];
				visible_towers++;
			}
		}
		if (puzl->constraints[(size * 3) + gap / size] != visible_towers)
			return (1);
	}
	return (0);
}

int	check_col_down(t_puzzle *puzl, int gap)
{
	int	i;
	int	max;
	int	count;

	i = puzl->size - 1;
	max = 0;
	count = 0;
	if (gap / puzl->size == puzl->size - 1)
	{
		while (i >= 0)
		{
			if (puzl->grid[i][gap % puzl->size] > max)
			{
				max = puzl->grid[i][gap % puzl->size];
				count++;
			}
			i--;
		}
		if (puzl->constraints[puzl->size + gap % puzl->size] != count)
			return (1);
	}
	return (0);
}

int	check_row_left(t_puzzle *puzl, int gap)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	if (gap % puzl->size == puzl->size - 1)
	{
		while (i < puzl->size)
		{
			if (puzl->grid[gap / puzl->size][i] > max)
			{
				max = puzl->grid[gap / puzl->size][i];
				count++;
			}
			i++;
		}
		if (puzl->constraints[(puzl->size * 2) + gap / puzl->size] != count)
			return (1);
	}
	return (0);
}
