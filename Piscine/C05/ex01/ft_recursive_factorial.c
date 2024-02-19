/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:32:50 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/13 16:03:21 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a recursive function that returns the factorial of the number given 
   as a parameter.
   If the argument is not valid the function should return 0.
   Overflows must not be handled, the function return will be undefined.
   Here’s how it should be prototyped : */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int main() {
    // Test with a range of values, including edge cases
    printf("Factorial of -1 (0): %d\n", ft_recursive_factorial(-1));
    printf("Factorial of 0 (1): %d\n", ft_recursive_factorial(0));
    printf("Factorial of 1 (1): %d\n", ft_recursive_factorial(1));
    printf("Factorial of 2 (2): %d\n", ft_recursive_factorial(2));
    printf("Factorial of 3 (6): %d\n", ft_recursive_factorial(3));
    printf("Factorial of 5 (120): %d\n", ft_recursive_factorial(5));
    printf("Factorial of 10 (3628800): %d\n", ft_recursive_factorial(10));
    // Large number (potential overflow depending on the system)
    printf("Factorial of 13 (may overflow): %d\n", ft_recursive_factorial(13));
    return 0;
}*/
