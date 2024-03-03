/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:45:07 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/03 21:28:22 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  strdup() function returns a pointer to a new string which is a 
   duplicate of the string s.  
   Memory for the new string is obtained with malloc(3), 
   and can be freed with free(3). 
   On success, the strdup() function returns a pointer to the duplicated string.
   It returns NULL if insufficient memory was available, with errno set to 
   indicate the cause of the error. */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*ptr_dest;
	const char	*ptr_src;
	char		*dest_start;

	if (s == NULL)
		return (NULL);
	ptr_src = s;
	ptr_dest = malloc(ft_strlen(s) + 1);
	if (ptr_dest == NULL)
		return (NULL);
	dest_start = ptr_dest;
	while (*ptr_src != '\0')
		*ptr_dest++ = *ptr_src++;
	*ptr_dest = '\0';
	return (dest_start);
}
