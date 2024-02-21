/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:25:02 by lfrench           #+#    #+#             */
/*   Updated: 2024/02/21 17:50:43 by lfrench          ###   ########.fr       */
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

	printf("----------------\n");
	printf("Testing ft_isascii:\n");
	printf("Is \'Q\' ascii? ");
	printf("%d\n", ft_isascii('Q'));
	printf("Is \'2\' ascii? ");
	printf("%d\n", ft_isascii('2'));
	printf("Is \'\\\' ascii? ");
	printf("%d\n", ft_isascii('\\'));
	printf("Is 255 ascii? ");
	printf("%d\n", ft_isascii(255));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_isprint:\n");
	printf("Is \'Q\' print? ");
	printf("%d\n", ft_isprint('Q'));
	printf("Is \'2\' print? ");
	printf("%d\n", ft_isprint('2'));
	printf("Is \'\\\' print? ");
	printf("%d\n", ft_isprint('\\'));
	printf("Is 255 print? ");
	printf("%d\n", ft_isprint(255));
	printf("----------------\n\n");

	return (1);
}
