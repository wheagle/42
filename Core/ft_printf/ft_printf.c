/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:24:31 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/14 12:30:19 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_printf(const char *format, ...)
{
	va_list	ap;
	va_start(ap, format);
	//find the number of arguments by the % specifiers in format
	//start printing from format, interrupting at valid % specifiers
	//for each % specifier in format, call its formatting function
	//print the result
	//loop until finished
	va_end(ap);
}
