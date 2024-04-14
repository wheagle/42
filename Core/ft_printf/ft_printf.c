/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:24:31 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/14 21:48:18 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_printf(const char *format, ...)
{
//	int		arg_count;
	int		i;

	i = 0;
//	arg_count=0;
	va_list	arg_ptr;
	va_start(arg_ptr, format);
	//find the number of arguments by the % specifiers in format
//	arg_count = count_args(format);
	while(format[i] != '\0')
	{
	//start printing from format, interrupting at valid % specifiers
	//for each % specifier in format, call its formatting function
		if (format[i++] != '%')
			ft_putchar(format[i - 1]);
		else if (format[i] == '\0')
			break;
		else if (format[i] == '%')
			ft_putchar('%');
		else if (format[i] == 'c')
			ft_putchar(va_arg(arg_ptr, char));
		else if (format[i] == 's')
			ft_putstr(va_arg(arg_ptr, char *));
		else if (format[i] == 'p')
			ft_print_ptr(va_arg(arg_ptr, void *));
		else if (format[i] == 'd' || format[i] == 'i')
			ft_putnbr(va_arg(arg_ptr, int));
		else if (format[i] == 'u')
			ft_putnbr(va_arg(arg_ptr, unsigned int));
		else if (format[i] == 'x')
			ft_print_lowercase_hex(va_arg(arg_ptr, unsigned int));
		else if (format[i] == 'X')
			ft_print_uppercase_hex(va_arg(arg_ptr, unsigned int));
	} //loop until finished
	va_end(arg_ptr);
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
}
*/
