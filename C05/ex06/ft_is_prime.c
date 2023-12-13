/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:26:15 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/13 17:57:10 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that returns 1 if the number given as a parameter is a 
   prime number, and 0 if it isn’t. 0 and 1 are not prime numbers. 
   Here’s how it should be prototyped : */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	unsigned int	i;
	unsigned int	u_nb;

	if (nb <= 1)
		return (0);
	u_nb = nb;
	i = 2;
	while (i * i <= u_nb)
	{
		if (u_nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main() {
    printf("Is 0 prime? %d (Expected: 0)\n", ft_is_prime(0));
    printf("Is 1 prime? %d (Expected: 0)\n", ft_is_prime(1));
    printf("Is 4 prime? %d (Expected: 0)\n", ft_is_prime(4));
    printf("Is 2 prime? %d (Expected: 1)\n", ft_is_prime(2));
    printf("Is 3 prime? %d (Expected: 1)\n", ft_is_prime(3));
    printf("Is 5 prime? %d (Expected: 1)\n", ft_is_prime(5));
    printf("Is 7 prime? %d (Expected: 1)\n", ft_is_prime(7));
    printf("Is 97 prime? %d (Expected: 1)\n", ft_is_prime(97));
    printf("Is 100 prime? %d (Expected: 0)\n", ft_is_prime(100));
    return 0;
}*/
