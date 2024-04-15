/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:24:31 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/15 17:59:27 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define LOWERCASE 0
#define UPPERCASE 1

int		ft_printf(const char *format, ...)
{
	int		char_count;
	const char	*f;

	f = format;
	char_count = 0;
	va_list	arg_ptr;
	va_start(arg_ptr, format);
	while(*f != '\0')
	{
		if (*f != '%')
		{
			f++;
			if (*f == '\0')
				break;
			char_count += ft_print_formatted(*f, arg_ptr);
		}
		else
			char_count += write(1, f, 1);
		++f;
	}
	va_end(arg_ptr);
	return (char_count);
}
int	ft_print_formatted(char specifier, va_list arg_ptr)
{
	int		count;
	int		c;
	char	*str;

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
		count += ft_print_nbr(va_arg(arg_ptr, unsigned int));
	else if (specifier == 'x')
		count += ft_print_hex(va_arg(arg_ptr, unsigned int), LOWERCASE);
	else if (specifier == 'X')
		count += ft_print_hex(va_arg(arg_ptr, unsigned int), UPPERCASE);
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
		return (write(1 ,"nil", 3));
	while (*str != '\0')
	{
		count += write (1, str, 1);
		if (count == -1)
			return (write(1 ,"nil", 3));
		str++;
	}
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	if (!ptr)
		return (ft_print_str("nil"));
	else
		return (ft_print_hex((uintptr_t)ptr, LOWERCASE));
}

int	ft_print_nbr(int nbr)
{
	int	count;

	count = 0;
	if (nbr == -2147483648)
		count += write(1, "-2147483648", 11);
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

int	ft_print_hex(unsigned int nbr, int ltr_case)
{
	static const char lower_hex_digits[] = "0123456789abcdef";
	static const char upper_hex_digits[] = "0123456789ABCDEF";
	int	i;
	char str[12];

	i = 10;
	str[0] = '0';
	str[1] = 'x';
	str[11] = '\0';
	if (nbr == 0)
		str[i--] = '0';
	else
		while(nbr != 0 && i > 1)
		{
			if (ltr_case == UPPERCASE)
				str[i--] = upper_hex_digits[nbr & 0xF];
			else
				str[i--] = lower_hex_digits[nbr & 0xF];
			nbr >>= 4;
		}
	return (ft_print_str(&str[i + 1]));
}


/*
int	count_args(const char *format)
{
	int	arg_count;

	int	i = 0;
	arg_count = 0;
	while(format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				i += 2;
				continue;
			}
			else
			{
				arg_count++;
				i++;
			}
		}
		i++;
	}
	return (arg_count);
} */
