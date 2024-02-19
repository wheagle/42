/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:19:24 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/12 14:52:40 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that displays a number in a base system in the terminal.
   This number is given in the shape of an int, and the radix in the shape of a
   string of characters.
   The base-system contains all useable symbols to display that number:
   0123456789 is the commonly used base system to represent decimal numbers
   01 is a binary base system ;
   0123456789ABCDEF an hexadecimal base system ;
   poneyvif is an octal base system.
   The function must handle negative numbers.
   If there’s an invalid argument, nothing should be displayed. 
   Examples of invalid arguments :
   base is empty or size of 1;
   base contains the same character twice ;
   base contains + or - ;
   Here’s how it should be prototyped :*/

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	u_nbr;
//	char			c;

	u_nbr = nbr;
	i = 0;
	while (base[i] != 0 )
	{
		if (base[i] < 33 || base[i] > 126 || base[i] == '-' || base[i] == '+')
			return;
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return;
			j++;
		}
		i++;
	}
	if (i < 2)
		return;
	if (nbr < 0)
	{
		write(1, "-", 1);
		u_nbr = -u_nbr;
	}
	if (u_nbr >= i)
		ft_putnbr_base(u_nbr / i, base);
	write(1, &base[u_nbr % i], 1);
}
/*
#include <stdio.h>
int	main() 
{
    int number1 = 123456;
    char *base16 = "0123456789ABCDEF";

    ft_putnbr_base(number1, base16);
    printf(" is %d in base 16\n", number1);

    int number2 = 123456;
    char *base8 = "poneyvif";

    ft_putnbr_base(number2, base8);
    printf(" is %d in base 8\n", number2);

	int number3 = -123456;
    char *base2 = "01";

    ft_putnbr_base(number3, base2);
    printf(" is %d in base 2\n", number3);

    return 0;
}*/
