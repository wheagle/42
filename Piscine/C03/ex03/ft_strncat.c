/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:46:51 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/12 14:17:07 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  The strcat() function appends the src string to the dest string,
	overwriting the terminating null byte ('\0') at the end of dest, 
	and then adds a terminating null byte. The strings may not overlap,
	and the dest string must have enough space for the result.  
	If dest is not large enough, program behavior is unpredictable.
	The strncat() function is similar, except that
 	*  it will use at most n bytes from src; and
    *  src does not need to be null-terminated if it contains n or more bytes.
	As with strcat(), the resulting string in dest is always null-terminated.
    If src contains n or more bytes, strncat() writes n+1 bytes to dest 
	(n from src plus the terminating null byte).  
	Therefore, 	the size of dest must be at least strlen(dest)+n+1. */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (j < nb && src[j] != 0)
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

	printf("\"%s\" appended to \"%s\"", src, dest);
	printf(" limited by size %u is:\n", 4);
	printf("%s\n", ft_strncat(dest, src, 4));

	return (0);
}*/
