/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:42:36 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/13 16:55:08 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function ft_fibonacci that returns the n-th element of the 
   Fibonacci sequence, the first element being at the 0 index. We’ll consider 
   that the Fibonacci sequence starts like this: 0, 1, 1, 2.
   Overflows must not be handled, the function return will be undefined.
   Obviously, ft_fibonacci has to be recursive.
   If the index is less than 0, the function should return -1.   
   Here’s how it should be prototyped: */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int main() {
    printf("Fibonacci of -1 (should be -1): %d\n", ft_fibonacci(-1));
    printf("Fibonacci of 0 (should be 0): %d\n", ft_fibonacci(0));
    printf("Fibonacci of 1 (should be 1): %d\n", ft_fibonacci(1));
    printf("Fibonacci of 2 (should be 1): %d\n", ft_fibonacci(2));
    printf("Fibonacci of 3 (should be 2): %d\n", ft_fibonacci(3));
    printf("Fibonacci of 4 (should be 3): %d\n", ft_fibonacci(4));
    printf("Fibonacci of 5 (should be 5): %d\n", ft_fibonacci(5));
    printf("Fibonacci of 6 (should be 8): %d\n", ft_fibonacci(6));
    printf("Fibonacci of 10 (should be 55): %d\n", ft_fibonacci(10));
    return 0;
}*/
