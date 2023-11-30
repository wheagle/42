/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:07:32 by lfrench           #+#    #+#             */
/*   Updated: 2023/11/30 22:59:30 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that capitalizes the first letter of each word and 
   transforms all other letters to lowercase. 
   A word is a string of alphanumeric characters.
   It should return str. */

char	*ft_strcapitalize(char *str);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int is_word_start;

	i = 0;
	is_word_start = 1;
	while (str[i] != 0)
	{
		if ((48 <= str[i] && str[i] <= 57) || (65 <= str[i] && str[i] <= 90)  
			|| (97 <= str[i] && str[i] <= 122))
		{
			if (is_word_start == 1)
			{
				if (97 <= str[i] && str[i] <= 122)
					str[i] = str[i] - 32;
				is_word_start = 0;
			}
			else if (65 <= str[i] && str[i] <= 90)
			{
				str[i] = str[i] + 32;
			}
		}
		else
		{
			is_word_start = 1;
		}
		i++;
	}
	return str;
}

#include <stdio.h>
int	main(void)
{
	char	str_is_lowercase[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n becomes \n", str_is_lowercase);
	printf("%s\n", ft_strcapitalize(str_is_lowercase));

	return (0);
} 
