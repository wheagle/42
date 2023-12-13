/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:04:40 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/13 16:38:33 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a recursive function that returns the value of a power applied to a 
   number.
   A power lower than 0 returns 0.
   Overflows must not be handled, the function return will be undefined.
   We’ve decided that 0 power 0 will returns 1
   Here’s how it should be prototyped : */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>
int main() {
    printf("2^3 (recursive) = %d\n", ft_recursive_power(2, 3));
    printf("5^0 (recursive) = %d\n", ft_recursive_power(5, 0));
    printf("10^2 (recursive) = %d\n", ft_recursive_power(10, 2));
    printf("3^-2 (recursive, should be 0) = %d\n", 
			ft_recursive_power(3, -2));
    return 0;
}*/
