/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:17:17 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/14 12:01:03 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that returns the next prime number greater or equal to the 
   number given as argument. 
   Here’s how it should be prototyped : */

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb + i))
	{
		i++;
	}
	return (nb + i);
}

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
    int test_numbers[] = { -5, 0, 1, 2, 3, 4, 10, 20, 30, 97, 100 };
    int num_tests = sizeof(test_numbers) / sizeof(test_numbers[0]);
    int i = 0;

    while (i < num_tests) 
	{
        int num = test_numbers[i];
        int next_prime = ft_find_next_prime(num);
        printf("Next prime after %d is %d\n", num, next_prime);
        i++;
    }
    return 0;
}*/
