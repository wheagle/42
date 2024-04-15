/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:24:31 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/15 14:47:40 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#define LOWERCASE 0
#define UPPERCASE 1

int		ft_printf(const char *format, ...)
{
	int		char_count;
	int		i;
	const char	*f;

	f = format;
	i = 0;
	char_count = 0;
	va_list	arg_ptr;
	va_start(arg_ptr, format);
	while(*f != '\0')
	{
		if (*f != '%')
			char_count += ft_print_formatted(*(++f), arg_ptr);
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

	count = 0;
	if (specifier == 'c')
		count += ft_print_char(va_arg(arg_ptr, char));
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
	return (write(1, &c, 1);
}

int	ft_print_str(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
		return ;
	while (*str != '\0')
	{
		count += write (1, str, 1);
		if (count == -1)
			return ;
		s++;
	}
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	if (!ptr)
		return (ft_print_str('nil'));
	else
		return (ft_print_hex((unsigned int)ptr, LOWERCASE));
}

int	ft_print_nbr(int nbr)
{

}

int	ft_print_hex(unsigned int nbr, int case)
{
	static const char lower_hex_digits[] = "0123456789abcdef";
	static const char upper_hex_digits[] = "0123456789ABCDEF";
	int	count;
	int	size = sizeof(nbr) * 2;
	int	i;
	char *str = malloc((sizeof(char) * (size + 3)));
	uintptr_t	address;

	if (!str)
		return (ft_print_str('nil'));
	count = 0;
	i = size + 1;
	str[0] = '0';
	str[1] = 'x';
	address = (uintptr_t)ptr;



	count = 0;
	if (case == UPPERCASE)
		
	else
		
	while(i > 1)
	{
		str[i--] = hex_digits[address & 0xF];
        address >>= 4;
	}


	str[size + 2] = '\0';
	count += ft_print_str(str);
	free(str);
	return (count);
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
