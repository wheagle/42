/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:10:42 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/03 20:40:52 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The calloc() function allocates memory for an array of nmemb elements of 
   size bytes each and returns a pointer to the  allocated memory. 
   The  memory  is set to zero.  
   If nmemb or size is 0, then calloc() returns either NULL, 
   or a unique pointer value that can later be successfully passed to free().
   If the multiplication of nmemb and size would result in integer overflow, 
   then calloc()  returns an error. 
   The malloc() and calloc() functions return a pointer to the allocated memory,
   which is suitably aligned for any  built-in  type.
   On  error, these functions return NULL.  NULL may also be returned by a 
   successful call to malloc() with a size of zero, or by a successful call 
   to calloc() with nmemb or size equal to zero. */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	total_size = nmemb * size;
	if (total_size / nmemb != size)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}
