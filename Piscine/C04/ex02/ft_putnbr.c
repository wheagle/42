/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:52:35 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/11 15:45:05 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that displays the number entered as a parameter. The 
   function has to be able to display all possible values within an int type 
   variable. Here’s how it should be prototyped: */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(void)
{
	int	nb1 = 42;
	int nb2 = 12345678;
	int nb3 = -87654321;
	int nb0 = 0;

	ft_putnbr(nb1);
	write(1, "\n", 1);
	ft_putnbr(nb2);
	write(1, "\n", 1);
	ft_putnbr(nb3);
	write(1, "\n", 1);
	ft_putnbr(nb0);
	write(1, "\n", 1);
	return(0);
}*/
