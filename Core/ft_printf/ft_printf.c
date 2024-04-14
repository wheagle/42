/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:24:31 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/14 12:46:01 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_printf(const char *format, ...)
{
	int	arg_count;
	int	i;

	i = 0;
	arg_count=0;
	va_list	arg_ptr;
	va_start(arg_ptr, format);
	//find the number of arguments by the % specifiers in format
	while(format[i] != '\0')
		if (format[i++] == '%')
			++arg_count;
	i = 0;
	while(i < arg_count && format[i] != '\0')
	{
	//start printing from format, interrupting at valid % specifiers
	//for each % specifier in format, call its formatting function
	}
	//print the result
	//loop until finished
	va_end(arg_ptr);
}
