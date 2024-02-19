/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:07:32 by lfrench           #+#    #+#             */
/*   Updated: 2023/11/30 10:47:46 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that transforms every letter to lowercase. 
   It should return str. */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (65 <= str[i] && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return str;
}

#include <stdio.h>
int	main(void)
{
	char	str_is_uppercase[] = "LEET";

	printf("LEET becomes %s.\n", ft_strlowcase(str_is_uppercase));

	return (0);
} 
