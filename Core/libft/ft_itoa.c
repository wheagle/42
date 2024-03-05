/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:14:55 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/05 16:30:57 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a string representing the integer 
   received as an argument. Negative numbers must be handled.
   Return value: The string representing the integer.
   NULL if the allocation fails. */

#include <stdlib.h>
#include "libft.h"
#include <limits.h>

static size_t	get_int_len(int n);

char	*ft_itoa(int n)
{
	char			*a;
	unsigned int	len;
	unsigned int	nbr;

	if (n == INT_MIN)
		nbr = (unsigned int)INT_MAX + 1;
	else if (n < 0)
		nbr = (unsigned int)(-n);
	else
		nbr = (unsigned int)n;
	len = get_int_len(nbr);
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	if (n == INT_MIN)
		ft_strlcpy(a, "-2147483648", 12);
	else
	{
		if (n < 0)
		{
			a[0] = '-';
			n = -n;
		}
		else if (n == 0)
			a[0] = '0';
		a[len] = '\0';
		while (n != 0)
		{
			a[--len] = (n % 10) + '0';
			n /= 10;
		}
	}
	return (a);
}

static size_t	get_int_len(int n)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
