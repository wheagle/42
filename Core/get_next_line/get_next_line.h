/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:35:47 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/09 21:43:29 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	char			*string;
	struct s_list	*next;
}					t_list;

char	*get_next_line(int fd);
int		find_newline(t_list *line_snip);
void	create_snips(t_list **line_snip, int fd);
char	*extract_line(t_list *line_snip);
void	clean_snips(t_list **line_snip);
t_list	*get_last_node(t_list *line_snip);
int		length_to_newline(t_list *line_snip);
void	copy_string(t_list *line_snip, char *string);
void	dealloc(t_list **line_snip, t_list *clean_node, char *buffer);
void	add_line_snip(t_list **line_snip, char *buffer);

#endif