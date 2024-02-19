/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:07:32 by lfrench           #+#    #+#             */
/*   Updated: 2023/11/30 10:21:18 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that returns 1 if the string given as a parameter contains
   only uppercase alphabetical characters, and 0 if it contains any other 
   character. It should return 1 if str is empty. */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 65 || 90 < str[i])
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str_is_not_uppercase[] = "Hello, World!";
	char	str_is_uppercase[] = "LEET";
	char	str_is_empty[] = "";

	if (ft_str_is_uppercase(str_is_not_uppercase))
		printf("Hello, World! is uppercase.\n");
	else 
		printf("Hello, World! is not uppercase.\n");

	if (ft_str_is_uppercase(str_is_uppercase))
		printf("LEET is uppercase.\n");
	else 
		printf("LEET is not uppercase.\n");

	printf("Empty String is %d.\n", ft_str_is_uppercase(str_is_empty));

	return (0);
} */
