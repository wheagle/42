/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:07:32 by lfrench           #+#    #+#             */
/*   Updated: 2023/11/30 10:45:18 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that transforms every letter to uppercase. 
   It should return str. */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (97 <= str[i] && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return str;
}
/*
#include <stdio.h>
int	main(void)
{
	char	str_is_lowercase[] = "leet";

	printf("leet becomes %s.\n", ft_strupcase(str_is_lowercase));

	return (0);
} */
