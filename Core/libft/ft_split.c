/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:58:36 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/05 14:11:26 by lfrench          ###   ########.fr       */
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
char	*ft_next_word(char **s, char c);

char	**ft_split(char const *s, char c)
{
	char	**strs;
	size_t	word_count;
	size_t	i;

	if (s == NULL)
		return (NULL);
	word_count = ft_count_words(s, c);
	strs = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		strs[i] = ft_next_word((char **)&s, c);
		if (strs[i] == NULL)
		{
			while (i-- > 0)
				free(strs[i]);
			free(strs);
			return (NULL);
		}
		i++;
	}
	strs[word_count] = NULL;
	return (strs);
}

size_t	ft_count_words(char const *s, char c)
{
	size_t	word_count;
	int		is_word;

	word_count = 0;
	is_word = 0;
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

char	*ft_next_word(char **s, char c)
{
	char	*word_start;
	size_t	word_length;

	while (**s && **s == c)
		(*s)++;
	word_start = *s;
	while (**s && **s != c)
		(*s)++;
	word_length = *s - word_start;
	return (ft_substr(word_start, 0, word_length));
}
