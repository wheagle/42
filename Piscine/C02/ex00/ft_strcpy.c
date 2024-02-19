/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:32:53 by lfrench           #+#    #+#             */
/*   Updated: 2023/11/28 11:10:37 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reproduce the behavior of the function strcpy (man strcpy). */

/* The  strcpy() function copies the string pointed to by src, including the 
   terminating null byte ('\0'), to the buffer pointed to by dest.  The strings 
   may not overlap, and the destination string dest must be large enough to 
   receive the copy.  Beware of buffer overruns! */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>
int	main(void)
{
	char	str1[] = "Hello, World";
	char	str2[13];
	ft_strcpy(str2, str1);
	write(1, &str2, 12);
	write(1, "\n", 1);
	return (0);
}*/
