/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:35:46 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/04 12:51:07 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a substring from the string ’s’. 
   The substring begins at index ’start’ and is of maximum size ’len’.
   Return value: The substring. NULL if the allocation fails. */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (s[i] != '\0' && i < start)
		i++;
	i = 0;
	while (s[i] != '\0' && i < len)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
