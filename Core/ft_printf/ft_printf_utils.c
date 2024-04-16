/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:03:09 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/16 14:30:29 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define LOWERCASE 0
#define UPPERCASE 1

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_print_str("(nil)"));
	else
	{
		count += ft_print_str("0x");
		count += ft_print_hex((uintptr_t)ptr, LOWERCASE);
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

int	ft_print_hex(unsigned long nbr, int ltr_case)
{
	int					i;
	int					count;
	char				*str;

	str = malloc((sizeof(nbr) * 2) + 1);
	if (!str)
		return (-1);
	count = 0;
	str = ft_bzero(str, (sizeof(nbr) * 2) + 1);
	i = (sizeof(nbr) * 2) - 1;
	str[i] = '\0';
//	if (nbr == 0)
//		str[i--] = '0';
	while (i >= 0)
	{
		if (ltr_case == UPPERCASE)
			str[i--] = UPPER_HEX_DIGITS[nbr & 0xF];
		else
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
