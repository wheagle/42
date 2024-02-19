/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:29:37 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/11 14:37:22 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that counts and returns the number of characters in a 
   string. Here’s how it should be prototyped: */

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	str_len;

	str_len = 0;
	while (str[str_len] != 0)
	{
		str_len++;
	}
	return (str_len);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str = "tencharstr";

	printf("'%s' has ", str);
	printf("%d chars.\n", ft_strlen(str));
	return (0);
}*/
