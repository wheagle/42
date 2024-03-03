/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:24:55 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/03 17:52:58 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  bzero()  function  erases  the data in the n bytes of the memory 
   starting at the location pointed to by s, by writing zeros
       (bytes containing '\0') to that area. */

#include <stddef.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	return (s);
}
