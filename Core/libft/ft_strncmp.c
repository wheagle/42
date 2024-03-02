/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:53:14 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/02 21:26:40 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The strcmp() function compares the two strings s1 and s2. The locale is not 
   taken into account (for a locale-aware comparison, see strcoll(3)).  
   The comparison is done using unsigned characters. strcmp() returns 
   an integer indicating the result of the comparison, as follows:
   • 0, if the s1 and s2 are equal;
   • a negative value if s1 is less than s2;
   • a positive value if s1 is greater than s2.
   The  strncmp() function is similar, except it compares only 
   the first (at most) n bytes of s1 and s2. */

#include <stddef.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != 0 || s2[i] != 0))
	{
		if ((unsigned char)s1[i] != (unsigned char) s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
