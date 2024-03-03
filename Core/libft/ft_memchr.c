/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 18:56:46 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/03 19:14:41 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  memchr() function scans the initial n bytes of the memory area pointed 
   to by s for the first instance of c.  Both c and the bytes of the memory 
   area pointed to by s are interpreted as unsigned char.
   The memchr() and memrchr() functions return a pointer to the matching byte 
   or NULL if the character does not occur in the  given memory area. */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
