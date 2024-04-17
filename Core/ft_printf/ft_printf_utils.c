/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:03:09 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/17 10:06:35 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_print_str("(nil)"));
	else
	{
		count += ft_print_str("0x");
		count += ft_print_lower_hex((uintptr_t)ptr);
		return (count);
	}
}

int	ft_print_nbr(int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
	{
		count += write(1, "-2147483648", 11);
		return (count);
	}
	if (nbr < 0)
	{
		count += write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		count += ft_print_nbr(nbr / 10);
	count += ft_print_char((nbr % 10) + '0');
	return (count);
}

unsigned int	ft_print_unbr(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr >= 10)
		count += ft_print_unbr(nbr / 10);
	count += ft_print_char((nbr % 10) + '0');
	return (count);
}

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

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < (n - 1))
	{
		ptr[i] = '0';
		i++;
	}
	ptr[i] = '\0';
	return ((void *)ptr);
}
