/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:07:32 by lfrench           #+#    #+#             */
/*   Updated: 2024/02/19 15:16:11 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that returns 1 if the string given as a parameter 
   contains only alphabetical characters, and 0 if it contains any other 
   character. It should return 1 if str is empty. */

int	ft_isalpha(char *str);

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 65 || 122 < str[i])
			return (0);
		if (str[i] > 91 && 96 > str[i])
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str_is_not_alpha[] = "Hello, World!";
	char	isalpha[] = "HelloWorld";

	if (ft_isalpha(str_is_not_alpha))
		printf("Hello, World! is alphabetical.\n");
	else 
		printf("Hello, World! is not alphabetical.\n");

	if (ft_isalpha(isalpha))
		printf("HelloWorld is alphabetical.\n");
	else 
		printf("HelloWorld is not alphabetical.\n");
	return (0);
} */
