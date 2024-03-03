/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:59:53 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/03 18:28:46 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  memcpy()  function  copies  n bytes from memory area src 
   to memory area dest.  The memory areas must not overlap.  
   Use memmove(3) if the memory areas do overlap. 
   The memcpy() function returns a pointer to dest. */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
