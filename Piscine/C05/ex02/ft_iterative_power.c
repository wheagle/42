/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:04:40 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/13 16:14:58 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create an iterated function that returns the value of a power applied to a 
   number.
   A power lower than 0 returns 0.
   Overflows must not be handled.
   We’ve decided that 0 power 0 will returns 1
   Here’s how it should be prototyped :*/

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		--power;
	}
	return (result);
}
/*
#include <stdio.h>
int main() {
    printf("2^3 (iterative) = %d\n", ft_iterative_power(2, 3));
    printf("5^0 (iterative) = %d\n", ft_iterative_power(5, 0));
    printf("10^2 (iterative) = %d\n", ft_iterative_power(10, 2));
    printf("3^-2 (iterative, should be 0) = %d\n", 
			ft_iterative_power(3, -2));
    return 0;
}*/
