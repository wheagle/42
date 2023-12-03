/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:16:57 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/03 18:01:54 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "puzzle.h"
#include <unistd.h>

void	populate_constraints(t_puzzle *puzl, int *constraints);
void	free_grid(t_puzzle *puzl);

t_puzzle	*initialize_grid(int size, int *constraints)
{
	int			i;
	int			j;
	t_puzzle	*puzl;

	i = 0;
	puzl = (t_puzzle *)malloc(sizeof(t_puzzle));
	puzl->size = size;
	puzl->grid = (int **)malloc(size * sizeof(int *));
	puzl->constraints = (int *)malloc(size * 4 * sizeof(int));
	while (i < size)
	{
		puzl->grid[i] = (int *)malloc(size * sizeof(int));
		j = 0;
		while (j < size)
		{
			puzl->grid[i][j] = 0;
			j++;
		}
		i++;
	}
	populate_constraints(puzl, constraints);
	return (puzl);
}

void	populate_constraints(t_puzzle *puzl, int *constraints)
{
	int	k;

	k = 0;
	while (k < (puzl->size * 4))
	{
		puzl->constraints[k] = constraints[k];
		k++;
	}
}

void	free_grid(t_puzzle *puzl)
{
	int	i;

	i = 0;
	while (i < puzl->size)
	{
		free(puzl->grid[i]);
		i++;
	}
	free(puzl->constraints);
	free(puzl->grid);
	free(puzl);
}
