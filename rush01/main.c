/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnunes, glicciar, lfrench                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:00:44 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/03 18:00:10 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "puzzle.h"

t_puzzle	*initialize_grid(int size, int *constraints);
int			parse_input(char *arg, int *size, int **memory_adress);
void		display_grid(t_puzzle *puzl);
int			solver(t_puzzle *puzl, int gap);
int			ft_putstr(char *str);
void		free_grid(t_puzzle *puzl);

int	main(int argc, char *argv[])
{
	int			size;
	int			*constraints;
	t_puzzle	*puzl;

	if (!(argc > 1 && argc < 3 && parse_input(argv[1], &size, &constraints)))
	{
		ft_putstr("Error\n");
		return (1);
	}
	puzl = initialize_grid(size, constraints);
	if (solver(puzl, 0))
	{
		display_grid(puzl);
	}
	else
	{
		ft_putstr("Error\n");
	}
	free_grid(puzl);
}
