/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:02:40 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/01 18:48:46 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Outputs the integer 'n' to the given file descriptor. */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str[2];

	if (n == -2147483648)
	{
		ft_putchar_fd("-", fd);
		ft_putchar_fd("2", fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd("-", fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		str[0] = n % 10 + 0;
		str[1] = '\0';
		ft_putchar_fd(str, fd);
	}
	else
	{	
		str[0] = n + '0';
		str[1] = '\0';
		ft_putchar_fd(str, fd);
	}
}
