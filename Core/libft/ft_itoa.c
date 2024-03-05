/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:14:55 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/05 14:44:58 by lfrench          ###   ########.fr       */
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
	char	*a; //the char representation of the int
	size_t	len;

	if (n == INT_MIN)
		len = get_int_len((unsigned int)INT_MAX) + 1;
	else
		if (n < 0)
			len = get_int_len((unsigned int)(-n)) + 1;
		else
			len = get_int_len((unsigned int)n);
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	if (n == INT_MIN)
		a[0] = '-';
	else if (n < 0)
	{
		a[0] = '-';
		n = -n;
	}
	if (n == 0)
		a[0] = '0';
	while (n != 0)
	{
		if (n > 0)
			a[--len] = (n % 10) + '0';
		else
			a[--len] = -(n % 10) + '0';
		n /= 10;
	}
	a[len] = '\0';
	return (a);
}

static size_t	get_int_len(int n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		len++;
		n /= 10;
	}
	return (len);
}
