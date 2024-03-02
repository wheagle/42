/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:32:26 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/02 21:09:51 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strnstr() function locates the first occurrence of the null-terminated 
   string little in the string big, where not more than len characters are 
   searched. Characters that appear after a '\0’ character are not searched. 
   If little is an empty string, big is returned; if little occurs nowhere in 
   big, NULL is returned; otherwise a pointer to the first character of the 
   first occurrence of little is returned. */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			j = 1;
			while (little[j] != '\0' && big[i + j] == little[j] \
						&& (i + j) < len)
				j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
