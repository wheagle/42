/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 10:19:27 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/17 10:25:13 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_upper_hex(unsigned long nbr)
{
	int					i;
	int					count;
	char				*str;

	if (nbr == 0)
		return (write(1, "0", 1));
	str = malloc((sizeof(nbr) * 2) + 1);
	if (!str)
		return (-1);
	count = 0;
	str = ft_bzero(str, (sizeof(nbr) * 2) + 1);
	i = (sizeof(nbr) * 2) - 1;
	str[i] = '\0';
	while (i >= 0)
	{
		str[i--] = UPPER_HEX_DIGITS[nbr & 0xF];
		nbr >>= 4;
	}
	i = 0;
	while (str[i] == '0')
		i++;
	count = ft_print_str(&str[i]);
	free(str);
	return (count);
}

int	ft_print_lower_hex(unsigned long nbr)
{
	int					i;
	int					count;
	char				*str;

	if (nbr == 0)
		return (write(1, "0", 1));
	str = malloc((sizeof(nbr) * 2) + 1);
	if (!str)
		return (-1);
	count = 0;
	str = ft_bzero(str, (sizeof(nbr) * 2) + 1);
	i = (sizeof(nbr) * 2) - 1;
	str[i] = '\0';
	while (i >= 0)
	{
		str[i--] = LOWER_HEX_DIGITS[nbr & 0xF];
		nbr >>= 4;
	}
	i = 0;
	while (str[i] == '0')
		i++;
	count = ft_print_str(&str[i]);
	free(str);
	return (count);
}
