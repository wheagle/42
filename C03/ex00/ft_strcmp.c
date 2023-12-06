/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:53:14 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/06 12:19:10 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int				i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if ((unsigned char)s1[i] != (unsigned char) s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = "Hello";
	char	str2[] = "Hello";
	char	str3[] = "Helln";
	char	str4[] = "World";

	printf("%s and %s result: %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("%s and %s result: %d\n", str1, str3, ft_strcmp(str1, str3));
	printf("%s and %s result: %d\n", str1, str4, ft_strcmp(str1, str4));

	return (0);
}*/
