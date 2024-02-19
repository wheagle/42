/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:19:24 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/12 13:31:17 by lfrench          ###   ########.fr       */
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
	char			c;

	i = 0;
	while (base[i] != 0 && base[i] >= 33 && base[i] <= 126)
	{
		if (base[i] == base[i + 1] || base[i] == '-' || base[i] == '+')
			return;
		i++;
	}
//	if (i > 16)
//		return;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= i)
		ft_putnbr_base(nbr / i, base);

	write(1, &base[nbr % i], 1);
}

#include <stdio.h>
int	main() 
{
    int number = 123456;
    char *base = "0123456789ABCDEF";

    printf("%d in base 16: ", number);
    ft_putnbr_base(number, base);
    printf("\n");

    return 0;
}
