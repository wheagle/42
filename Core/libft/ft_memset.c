/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:24:55 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/03 17:47:50 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memset() function fills the first n bytes of the memory area pointed to 
   by s with the constant byte c. The memset() function returns a pointer to 
   the memory area s. */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
