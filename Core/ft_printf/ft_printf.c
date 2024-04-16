/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:24:31 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/16 13:05:00 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define LOWERCASE 0
#define UPPERCASE 1

int	ft_printf(const char *format, ...)
{
	int		char_count;
	va_list	arg_ptr;

	char_count = 0;
	va_start(arg_ptr, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
				break ;
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
