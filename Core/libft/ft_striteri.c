/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:31:44 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/02 15:47:23 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary. */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		length;
	int		index;
	char	*temp;

	length = 0;
	index = 0;
	temp = s;
	if (s != NULL && f != NULL)
	{
		length = ft_strlen(s);
		while (index < length)
		{
			(*f)(index, *temp);
			temp++;
			index++;
		}
	}
}
