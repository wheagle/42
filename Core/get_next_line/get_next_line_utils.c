/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:35:42 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/09 21:34:44 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	copy_string(t_list *line_snip, char *string)
{
	int	i;
	int	j;

	if (line_snip == NULL)
		return ;
	j = 0;
	while (line_snip)
	{
		i = 0;
		while (line_snip->string[i])
		{
			if (line_snip->string[i] == '\n')
			{
				string[j++] = '\n';
				string[j] = '\0';
				return ;
			}
			string[j++] = line_snip->string[i++];
		}
		line_snip = line_snip->next;
	}
	string[j] = '\0';
}

void	clean_snips(t_list **line_snip)
{
	t_list	*last;
	t_list	*clean;
	int		i;
	int		j;
	char	*buffer;

	buffer = malloc(BUFFER_SIZE + 1);
	clean = malloc(sizeof(t_list));
	if (buffer == NULL || clean == NULL)
		return ;
	last = get_last_node(*line_snip);
	i = 0;
	j = 0;
	while (last->string[i] && last->string[i] != '\n')
		++i;
	while (last->string[i] && last->string[++i])
		buffer[j++] = last->string[i];
	buffer[j] = '\0';
	clean->string = buffer;
	clean->next = NULL;
	dealloc(line_snip, clean, buffer);
}

t_list	*get_last_node(t_list *line_snip)
{
	if (line_snip == NULL)
		return (NULL);
	while (line_snip->next)
		line_snip = line_snip->next;
	return (line_snip);
}

void	dealloc(t_list **line_snip, t_list *clean, char *buffer)
{
	t_list	*temp;

	if (*line_snip == NULL)
		return ;
	while (*line_snip)
	{
		temp = (*line_snip)->next;
		free((*line_snip)->string);
		free(*line_snip);
		*line_snip = temp;
	}
	*line_snip = NULL;
	if (clean->string[0])
		*line_snip = clean;
	else
	{
		free(buffer);
		free(clean);
	}
}

int	find_newline(t_list *line_snip)
{
	int	i;

	if (!line_snip)
		return (0);
	while (line_snip)
	{
		i = 0;
		while (line_snip->string[i] && i < BUFFER_SIZE)
		{
			if (line_snip->string[i] == '\n')
				return (i);
			++i;
		}
		line_snip = line_snip->next;
	}
	return (0);
}