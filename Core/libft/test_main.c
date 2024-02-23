/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:25:02 by lfrench           #+#    #+#             */
/*   Updated: 2024/02/23 15:12:36 by lfrench          ###   ########.fr       */
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

	printf("----------------\n");
	printf("Testing ft_toupper:\n");
	printf("a toupper() is: ");
	printf("%c\n", ft_toupper('a'));
	printf("2 toupper() is: ");
	printf("%c\n", ft_toupper('2'));
	printf("Z toupper() is: ");
	printf("%c\n", ft_toupper('Z'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_tolower:\n");
	printf("a tolower() is: ");
	printf("%c\n", ft_tolower('a'));
	printf("2 tolower() is: ");
	printf("%c\n", ft_tolower('2'));
	printf("Z tolower() is: ");
	printf("%c\n", ft_tolower('Z'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_strchr:\n");
	printf("X in \'12X4X6\' is: ");
	printf("%s\n", ft_strchr("12X4X6", 'X'));
//	printf("X in \'12X4X6\' is: ");
//	printf("%s\n", ft_strchr("12X4X6", 'X'));
	printf("NULL in \'12X4X6\' is: ");
	printf("%s\n", ft_strchr("12X4X6", '\0'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_strrchr:\n");
	printf("X in \'12X4X6\' is: ");
	printf("%s\n", ft_strrchr("12X4X6", 'X'));
//	printf("X in \'12X4X6\' is: ");
//	printf("%s\n", ft_strrchr("12X4X6", 'X'));
	printf("NULL in \'12X4X6\' is: ");
	printf("%s\n", ft_strrchr("12X4X6", '\0'));
	printf("----------------\n\n");

	printf("----------------\n");
	printf("Testing ft_strlen:\n");
	printf("\'12X4X6\' length is: ");
	printf("%zu\n", ft_strlen("12X4X6"));
//	printf("X in \'12X4X6\' is: ");
//	printf("%s\n", ft_strrchr("12X4X6", 'X'));
	printf("\'12X\' length is: ");
	printf("%zu\n", ft_strlen("12X"));
	printf("----------------\n\n");

	char	str1[] = "Hello";
	char	str2[] = "Hello";
	char	str3[] = "Helln";
	char	str4[] = "World";
	printf("----------------\n");
	printf("%s+%s, size %u: %d\n", str1, str2, 3, ft_strncmp(str1, str2, 3));
	printf("%s+%s, size %u: %d\n", str1, str3, 5, ft_strncmp(str1, str3, 5));
	printf("%s+%s, size %u: %d\n", str1, str4, 3, ft_strncmp(str1, str4, 3));
	printf("----------------\n\n");

	return (1);
}
