/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:53:14 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/08 12:07:40 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strcmp() function compares the two strings s1 and s2. The locale is not 
   taken into account (for a locale-aware comparison, see strcoll(3)).  
   The comparison is done using unsigned characters.
   strcmp() returns an integer indicating the result of the comparison, 
   as follows:
   • 0, if the s1 and s2 are equal;
   • a negative value if s1 is less than s2;
   • a positive value if s1 is greater than s2. */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

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
