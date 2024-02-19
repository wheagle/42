/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:05:38 by jnunes            #+#    #+#             */
/*   Updated: 2023/12/03 13:48:06 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	parse_input(char *arg, int *size, int **memory_adress);
int	ft_sqrt(int nb);
int	allocate_numbers(int length, int **memory_adress, char *arg, int size);
int	is_character_valid(char c, int mod, int *length);

int	parse_input(char *arg, int *size, int **memory_adress)
{
	int	i;
	int	length;

	length = 0;
	i = 0;
	while (arg[i] != '\0')
	{
		if (is_character_valid(arg[i], (i % 2), &length) == 0)
			return (0);
		i++;
	}
	if (i % 2 == 0)
		return (0);
	*size = length / 4;
	if (size == 0)
		return (0);
	if (allocate_numbers(length, memory_adress, arg, *size) == 0)
		return (0);
	return (1);
}

int	is_character_valid(char c, int mod, int *length)
{
	if (mod == 0)
	{
		if (c < '1' && c > '9')
			return (0);
		(*length)++;
	}
	else
	{
		if (c != ' ')
			return (0);
	}
	return (1);
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while ((i * i) != nb)
	{
		if (i > nb || i > 46340)
			return (0);
		i++;
	}
	return (i);
}

int	allocate_numbers(int length, int **memory_adress, char *arg, int size)
{
	int	i;
	int	y;

	*memory_adress = (int *)malloc(length * sizeof(int));
	if (*memory_adress == NULL)
		return (0);
	i = 0;
	y = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] >= '1' && (arg[i] - 48) <= size)
		{
			(*memory_adress)[y] = arg[i] - 48;
			y++;
		}
		else if (arg[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}	
