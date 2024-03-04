/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:20:05 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/04 18:09:04 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a copy of
   ’s1’ with the characters specified in ’set’ removed
   from the beginning and the end of the string.
   Return value: The trimmed string. NULL if the allocation fails. */

#include <stddef.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s_trim;
	size_t	i;
	size_t	j;
	size_t	start;
	size_t	end;

	match = 0;
	if (s1 == NULL) //Check if s1 exists
		return (NULL);
	s_trim = ft_strdup(s1); //Set s_trim to s1
	if (set == NULL || *set == '\0') //If set is NULL or terminated
		return (s_trim);
	while (*s_trim != '\0') //Step through each char of s_trim
	{
		while (set[j] != '\0')
		{
			if (s_trim[i] == set[j]) //match found
			{
				start = i;
				exit;
			}
			j++;
		}
		i++;
	}

	
}
