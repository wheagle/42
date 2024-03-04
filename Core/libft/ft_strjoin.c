/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:23:07 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/04 13:43:46 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a new string, which is the result 
   of the concatenation of ’s1’ and ’s2’. */

#include <stddef.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*s_new;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
	{
//		s2_len = ft_strlen(s2);
//		s_new = malloc(s2_len);
//		if (s_new == NULL)
//			return (NULL);
		s_new = ft_strdup(s2);
		return (s_new);
	}
	else if (s2 == NULL)
	{
		s_new = ft_strdup(s1);
		return (s_new);
	}
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s_new = malloc(s1_len + s2_len + 1);
	if (s_new == NULL)
		return (NULL);
	while (*s1 != '\0')
		*s_new++ = *s1++;
	while (*s2 != '\0')
		*s_new++ = *s2++;
	*s_new = '\0';
	return (s_new);
}
