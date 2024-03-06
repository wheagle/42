/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:31:44 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/06 21:58:12 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function ’f’ to each character of the string ’s’, and passing 
   its index as first argument to create a new string (with malloc(3)) 
   resulting from successive applications of ’f’. 
   Return value: The string created from the successive applications of ’f’.
   Returns NULL if the allocation fails. */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	length;
	unsigned int	index;
	char			*s_new;

	length = 0;
	index = 0;
	if (s != NULL && f != NULL)
	{
		length = ft_strlen(s);
		s_new = (char *)malloc(sizeof(char) * length + 1);
		if (s_new == NULL)
			return (NULL);
		while (index < length)
		{
			s_new[index] = (*f)(index, s[index]);
			index++;
		}
		s_new[index] = '\0';
		return (s_new);
	}
	return (NULL);
}
