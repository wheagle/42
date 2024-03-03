/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:00:11 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/03 12:56:04 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strchr() function returns a pointer to the first occurrence 
   of the character c in the string s. */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (char)c)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
