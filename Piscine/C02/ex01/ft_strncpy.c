/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:06:07 by lfrench           #+#    #+#             */
/*   Updated: 2023/11/30 09:52:47 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reproduce the behavior of the function strncpy (man strncpy). */

/* The strcpy() function copies the string pointed to by src, including the 
   terminating null byte ('\0'), to the buffer pointed to by dest.  The strings 
   may not overlap, and the destination string dest must be large enough to 
   receive the copy.  Beware of buffer overruns!  (See BUGS.)

   The strncpy() function is similar, except that at most n bytes of src are 
   copied.  Warning: If there is no null byte among the first n bytes of src,  
   the  string  placed  in dest will not be null-terminated.

   If the length of src is less than n, strncpy() writes additional null bytes 
   to dest to ensure that a total of n bytes are written. */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		dest[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>
int	main(void)
{
	char	str1[] = "Hello, World";
	unsigned int	length = 13;
	char	str2[length];
	ft_strncpy(str2, str1, length);
	write(1, &str2, length);
	write(1, "\n", 1);
	return (0);
} */
