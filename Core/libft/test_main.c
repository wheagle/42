/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:25:02 by lfrench           #+#    #+#             */
/*   Updated: 2024/02/21 16:55:14 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* A main() function for testing the functions in libft */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	result;

	printf("Testing ft_isalpha:\n");
	printf("Is \'Q\' alpha? ");
	printf("%d\n", ft_isalpha('Q'));
	printf("Is \'2\' alpha? ");
	printf("%d\n", ft_isalpha('2'));
	printf("----------------\n\n");

	printf("Testing ft_isdigit:\n");
	printf("Is \'Q\' digit? ");
	printf("%d\n", ft_isdigit('Q'));
	printf("Is \'2\' digit? ");
	printf("%d\n", ft_isdigit('2'));
	printf("----------------\n\n");

	return (1);
}
