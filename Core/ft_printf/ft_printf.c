/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:24:31 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/15 13:23:08 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		count += ft_putchar(va_arg(arg_ptr, char));
	else if (specifier == 's')
		count += ft_putstr(va_arg(arg_ptr, char *));
	else if (specifier == 'p')
		count += ft_print_ptr(va_arg(arg_ptr, void *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putnbr_base(va_arg(arg_ptr, int), 10);
	else if (specifier == 'u')
		ft_putnbr(va_arg(arg_ptr, unsigned int));
	else if (specifier == 'x')
		ft_print_lowercase_hex(va_arg(arg_ptr, unsigned int));
	else if (specifier == 'X')
		ft_print_uppercase_hex(va_arg(arg_ptr, unsigned int));
	else // This should handle the double percent sign %%
		count += write(1, &specifier, 1);
	return (count);
}


/*
		else if (format[i] == '\0')
			break;
		else if (format[i] == '%')
			ft_putchar('%');
		else 
		
		
		

			*/

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
