/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:24:31 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/16 12:46:05 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define LOWERCASE 0
#define UPPERCASE 1

int		ft_printf(const char *format, ...)
{
	int		char_count;

	char_count = 0;
	va_list	arg_ptr;
	va_start(arg_ptr, format);
	while(*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break;
			char_count += ft_print_formatted(*format, arg_ptr);
		}
		else
			char_count += write(1, format, 1);
		++format;
	}
	va_end(arg_ptr);
	return (char_count);
}
int	ft_print_formatted(char specifier, va_list arg_ptr)
{
	int		count;

	count = 0;
	if (specifier == 'c')
		count += ft_print_char(va_arg(arg_ptr, int));
	else if (specifier == 's')
		count += ft_print_str(va_arg(arg_ptr, char *));
	else if (specifier == 'p')
		count += ft_print_ptr(va_arg(arg_ptr, void *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_print_nbr(va_arg(arg_ptr, int));
	else if (specifier == 'u')
		count += ft_print_unbr(va_arg(arg_ptr, unsigned int));
	else if (specifier == 'x')
		count += ft_print_hex(va_arg(arg_ptr, unsigned long), LOWERCASE);
	else if (specifier == 'X')
		count += ft_print_hex(va_arg(arg_ptr, unsigned long), UPPERCASE);
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_print_char(char c)
{
	return (write(1, &c, 1));
}

int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		count += write (1, str, 1);
		str++;
	}
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_print_str("nil"));
	else
	{
		count =+ ft_print_str("0x");
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
	static const char lower_hex_digits[] = "0123456789abcdef";
	static const char upper_hex_digits[] = "0123456789ABCDEF";
	int	i;
	int count;
	char *str = malloc((sizeof(nbr) * 2) + 1);
	
	if (!str)
		return (-1);
	count = 0;
	str = ft_bzero(str, (sizeof(nbr) * 2) + 1);
	i = (sizeof(nbr) * 2) - 1;
	str[i] = '\0';
	if (nbr == 0)
        str[i--] = '0';
	while(i >= 0)
	{
		if (ltr_case == UPPERCASE)
			str[i--] = upper_hex_digits[nbr & 0xF];
		else
			str[i--] = lower_hex_digits[nbr & 0xF];
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
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
	ptr[i] = '\0';
	return (s);
}
