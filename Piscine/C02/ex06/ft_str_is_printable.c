/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:07:32 by lfrench           #+#    #+#             */
/*   Updated: 2023/11/30 10:31:24 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that returns 1 if the string given as a parameter contains
   only printable characters, and 0 if it contains any other character. 
   It should return 1 if str is empty. */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] < 33 || 126 < str[i])
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str_is_not_printable[] = "  \n";
	char	str_is_printable[] = "LEET";
	char	str_is_empty[] = "";

	if (ft_str_is_printable(str_is_not_printable))
		printf("  \\n is printable.\n");
	else 
		printf("  \\n is not printable.\n");

	if (ft_str_is_printable(str_is_printable))
		printf("LEET is printable.\n");
	else 
		printf("LEET is not printable.\n");

	printf("Empty String is %d.\n", ft_str_is_printable(str_is_empty));

	return (0);
} */
