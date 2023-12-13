/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:55:59 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/13 17:25:03 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that returns the square root of a number (if it exists), 
   or 0 if the square root is an irrational number.
   Here’s how it should be prototyped :*/

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	unsigned int	x;
	unsigned int	y;
	unsigned int	u_nb;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	u_nb = nb;
	x = u_nb;
	y = (x + u_nb / x) / 2;
	while (y < x)
	{
		x = y;
		y = (x + u_nb / x) / 2;
	}
	return ((int)x);
}
/*
#include <stdio.h>
int	main() {
    int number1 = 9;
	int number2 = 81;
	int number3 = 144;
	int number4 = 2147483647;
    printf("The square root of %d is %d\n", number1, ft_sqrt(number1));
    printf("The square root of %d is %d\n", number2, ft_sqrt(number2));
    printf("The square root of %d is %d\n", number3, ft_sqrt(number3));
    printf("The square root of %d is %d\n", number4, ft_sqrt(number4));
    return 0;
}*/
