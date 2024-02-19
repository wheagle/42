/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:07:32 by lfrench           #+#    #+#             */
/*   Updated: 2024/02/19 15:16:44 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that returns 1 if the string given as a parameter contains
   only digits, and 0 if it contains any other character. 
   It should return 1 if str is empty. */

int	ft_isdigit(char *str);

int	ft_isdigit(char *str)
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
	char	isdigit[] = "1337";
	char	str_is_empty[] = "";

	if (ft_isdigit(str_is_not_numeric))
		printf("Hello, World! is numeric.\n");
	else 
		printf("Hello, World! is not numeric.\n");

	if (ft_isdigit(isdigit))
		printf("1337 numeric.\n");
	else 
		printf("1337 is not numeric.\n");

	printf("Empty String is %d.\n", ft_isdigit(str_is_empty));

	return (0);
}*/ 
