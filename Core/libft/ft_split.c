/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:58:36 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/05 13:29:15 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns an array of strings obtained by 
   splitting ’s’ using the character ’c’ as a delimiter. The array must end
   with a NULL pointer. 
   Return value: The array of new strings resulting from the split. 
   NULL if the allocation fails. */

#include <stddef.h>
#include "libft.h"

size_t	ft_count_words(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**strs;
	char	*s_new;
	size_t	length;

	if (s == NULL || *s == '\0')
		return (NULL);
	length = ft_strchr(s, (int)c) - s;

}

size_t	ft_count_words(char const *s, char c)
{
	size_t	word_count;
	int		is_word;

	word_count = 0;
	is_word = 0;
	//Step through *str and count the words
	//Check for repeating c
	while (*s)
	{
		if (*s != c && is_word == 0)
		{
			is_word = 1;
			word_count++;
		}
		else if (*s == c)
			is_word = 0;
		s++;
	}
	return (word_count);
}
