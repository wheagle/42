/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:07:32 by lfrench           #+#    #+#             */
/*   Updated: 2023/11/30 10:18:41 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that returns 1 if the string given as a parameter contains
   only lowercase alphabetical characters, and 0 if it contains any other 
   character. It should return 1 if str is empty. */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 97 || 122 < str[i])
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str_is_not_lowercase[] = "Hello, World!";
	char	str_is_lowercase[] = "leet";
	char	str_is_empty[] = "";

	if (ft_str_is_lowercase(str_is_not_lowercase))
		printf("Hello, World! is lowercase.\n");
	else 
		printf("Hello, World! is not lowercase.\n");

	if (ft_str_is_lowercase(str_is_lowercase))
		printf("leet is lowercase.\n");
	else 
		printf("leet is not lowercase.\n");

	printf("Empty String is %d.\n", ft_str_is_lowercase(str_is_empty));

	return (0);
} */
