/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 14:14:55 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/06 21:40:15 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a string representing the integer 
   received as an argument. Negative numbers must be handled.
   Return value: The string representing the integer.
   NULL if the allocation fails. */

#include <stdlib.h>
#include "libft.h"
#include <limits.h>

static void		fill_string_from_int(int n, char *a, size_t len);
static size_t	get_int_len(int n);

char	*ft_itoa(int n)
{
	char			*a;
	size_t			len;

	len = get_int_len(n);
	a = (char *)malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	a[len] = '\0';
	if (n == 0)
		a[0] = '0';
	else
	{
		fill_string_from_int(n, a, len);
	}
	return (a);
}

static size_t	get_int_len(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	fill_string_from_int(int n, char *a, size_t len)
{
	unsigned int	nbr;

	if (n < 0)
	{
		a[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	while (nbr != 0)
	{
		a[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
}
