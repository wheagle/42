/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:04:30 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/12 10:44:57 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  strstr()  function  finds  the  first  occurrence  of  the substring 
   needle in the string haystack. 
   The terminating null bytes ('\0') are not compared. */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != 0)
	{
		if (str[i] == to_find[0])
		{
			j = 1;
			while ((to_find[j] != 0) && (str[i + j] == to_find[j]))
			{
				j++;
			}
			if (to_find[j] == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
    char str1[] = "Hello, world!";
    char to_find1[] = "world";
    char to_find2[] = "planet";
    char to_find3[] = "";

	printf("str is '%s'\n", str1);

    // Test case 1: Substring found
    char *result1 = ft_strstr(str1, to_find1);
    if (result1)
        printf("Found substring: '%s'\n", result1);
    else
        printf("Substring '%s' not found.\n", to_find1);

    // Test case 2: Substring not found
    char *result2 = ft_strstr(str1, to_find2);
    if (result2)
        printf("Found substring: '%s'\n", result2);
    else
        printf("Substring '%s' not found.\n", to_find2);

    // Test case 3: Empty substring
    char *result3 = ft_strstr(str1, to_find3);
    if (result3)
        printf("Found empty substring at: '%s'\n", result3);
    else
        printf("Empty substring not found.\n");

    return 0;
}*/
