/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:25:02 by lfrench           #+#    #+#             */
/*   Updated: 2024/02/21 17:11:45 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* A main() function for testing the functions in libft */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	int	result;

	printf("\n----------------\n");
	printf("Testing ft_isalpha:\n");
	printf("Is \'Q\' alpha? ");
	printf("%d\n", ft_isalpha('Q'));
	printf("Is \'2\' alpha? ");
	printf("%d\n", ft_isalpha('2'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_isdigit:\n");
	printf("Is \'Q\' digit? ");
	printf("%d\n", ft_isdigit('Q'));
	printf("Is \'2\' digit? ");
	printf("%d\n", ft_isdigit('2'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_isalnum:\n");
	printf("Is \'Q\' alnum? ");
	printf("%d\n", ft_isalnum('Q'));
	printf("Is \'2\' alnum? ");
	printf("%d\n", ft_isalnum('2'));
	printf("Is \'\\\' alnum? ");
	printf("%d\n", ft_isalnum('\\'));
	printf("----------------\n\n");

	return (1);
}
