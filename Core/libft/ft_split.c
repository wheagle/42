/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:58:36 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/05 13:13:04 by lfrench          ###   ########.fr       */
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
	char	*str;
	char	*prev;

	word_count = 0;
	str = ft_strdup(s);
	//Step through *str and count the words
	//Check for repeating c
	while (*str == c) //skip initial delimiters, str now at first non-delimiter, maybe a word
		str++;
	while (*str != '\0') //Until str ends
	{
		prev = ft_strdup(str); //set prev to the start of first word
		while (ft_strchr(str, c) > prev) //while the next delimiter is more than one char way
		{
			word_count++; //increment word count
			str = ft_strchr(str, c); //move str to delimiter
			while (*str == c) //move str past any repeating delimiters
				str++; 
		}
	}
	return (word_count);
}
