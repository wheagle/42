/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:46:51 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/08 12:19:47 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  strcat()  function appends the src string to the dest string, 
   overwriting the terminating null byte ('\0') at the end of dest, 
   and then adds a terminating null byte. The strings may not overlap, 
   and the dest string must have enough space for the result. */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	src[] = "source";
	char	dest[12] = "dest";

	printf("\"%s\" appended to \"%s\" is:\n", src, dest);
	printf("%s\n", ft_strcat(dest, src));

	return (0);
}*/
