/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnunes <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:05:38 by jnunes            #+#    #+#             */
/*   Updated: 2023/12/02 11:05:40 by jnunes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include <stdio.h>
	#include <stdlib.h>

int	parse_input(char *arg, int *size, int **memory_adress);
int	ft_sqrt(int nb);
int	allocate_numbers(int length,int **memory_adress, char *arg, int size);

	int	parse_input(char *arg, int *size, int **memory_adress)
	{
		int	i;
		int	length;
		
		length = 0;
		i = 0;
		while (arg[i] != '\0')
		{
			if (i % 2 == 0)
			{
				if (arg[i] < '1' && arg[i] > '9') //If it's not a number return 0
					return (0);
				length++;
			}
			else
			{
				if (arg[i] != ' ') //If it's not a space return 0
					return (0);
			}
			i++;
		}
		if (i % 2 == 0)
			return (0);
		*size = ft_sqrt(length);
		if (size == 0)
			return (0);
		if (allocate_numbers(length, memory_adress, arg, *size) == 0)
			return (0);
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

	int	allocate_numbers(int length,int **memory_adress, char *arg, int size)
	{
		*memory_adress = (int *)malloc(length * sizeof(int));
		
		if (*memory_adress == NULL)
			return 0;
		
		int	i;
		int	y;
		
		i = 0;
		y = 0;
		while (arg[i] != '\0')
		{
		//If the current number is between 1 and the square root
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

	/*int	main(void)
	{
		int	*array;
		int	length;
		int	size;
		char	str[40] = "1 2 3 4 2 3 4 2 1 2 1 3 4 4 4 2";
		length = 0;
		size = 0;
		if (parse_input(str,&size,&array) == 0)
		{
			printf("Error");
		}
		else
		{
			int i = 0;
			while (i < (size*size))
			{
				printf("%d", array[i]);
				i++;
			}
		}
	}*/
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
