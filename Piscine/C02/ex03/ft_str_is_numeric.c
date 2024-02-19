/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:07:32 by lfrench           #+#    #+#             */
/*   Updated: 2023/11/30 10:09:16 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that returns 1 if the string given as a parameter contains
   only digits, and 0 if it contains any other character. 
   It should return 1 if str is empty. */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 48 || 57 < str[i])
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str_is_not_numeric[] = "Hello, World!";
	char	str_is_numeric[] = "1337";
	char	str_is_empty[] = "";

	if (ft_str_is_numeric(str_is_not_numeric))
		printf("Hello, World! is numeric.\n");
	else 
		printf("Hello, World! is not numeric.\n");

	if (ft_str_is_numeric(str_is_numeric))
		printf("1337 numeric.\n");
	else 
		printf("1337 is not numeric.\n");

	printf("Empty String is %d.\n", ft_str_is_numeric(str_is_empty));

	return (0);
}*/ 
