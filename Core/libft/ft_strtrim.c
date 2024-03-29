/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:20:05 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/04 20:28:01 by lfrench          ###   ########.fr       */
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
	size_t	start;
	size_t	end;
	size_t	trim_len;

	if (s1 == NULL)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end]) != NULL)
		end--;
	trim_len = 0;
	if (start <= end)
		trim_len = end - start + 1;
	s_trim = (char *)malloc(trim_len + 1);
	if (s_trim == NULL)
		return (NULL);
	if (trim_len > 0)
		ft_memcpy(s_trim, s1 + start, trim_len + 1);
	s_trim[trim_len] = '\0';
	return (s_trim);
}
