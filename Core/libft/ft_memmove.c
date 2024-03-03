/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:59:53 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/03 18:54:17 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  memmove()  function  copies  n bytes from memory area src to memory 
   area dest.  The memory areas may overlap: copying takes place as though 
   the bytes in src are first copied into a temporary array that does not 
   overlap src or dest, and  the  bytes  are then copied from the 
   temporary array to dest. */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);
	if (src == dest)
		return (dest);
	if (src > dest)
		ft_memcpy(dest, src, n);
	else
	{
		i = n;
		while (i > 0)
		{
			((char *)dest)[i - 1] = ((char *)src)[i - 1];
			i--;
		}
	}
	return (dest);
}
