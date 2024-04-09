/* *************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 19:35:15 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/09 21:53:12 by lfrench          ###   ########.fr       */
/*                                                                            */
/* *************************************************************************/

/*
 Check if fd or buffer or read() are useful.
 Create the list of snips from reading buffers
 Read the list and extract the line
 Clean up the linked list and get ready for the next call
*/

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_list	*line_snip = NULL;
	char			*current_line;

	if (fd < 0 || BUFFER_SIZE <= 0 /*|| (read(fd, &line_snip, 0) > 0)*/)
		return (NULL);
	create_snips(&line_snip, fd);
	if (line_snip == NULL)
		return (NULL);
	current_line = extract_line(line_snip);
	clean_snips(&line_snip);
	return (current_line);
}

void	create_snips(t_list **line_snip, int fd)
{
	int		chars_read;
	char	*buffer;

	while (!find_newline(*line_snip))
	{
		buffer = malloc(BUFFER_SIZE + 1);
		if (!buffer)
			return ;
		chars_read = read(fd, buffer, BUFFER_SIZE);
		if (chars_read <= 0)
		{
			free(buffer);
			return ;
		}
		buffer[chars_read] = '\0';
		add_line_snip(line_snip, buffer);
		//free(buffer);
	}
}

void	add_line_snip(t_list **line_snip, char *buffer)
{
	t_list	*new;
	t_list	*last;

	last = get_last_node(*line_snip);
	new = malloc(sizeof(t_list));
	if (new == NULL)
		return ;
	if (last == NULL)
		*line_snip = new;
	else
		last->next = new;
	new->string = buffer;
	new->next = NULL;
}

char	*extract_line(t_list *line_snip)
{
	int		string_length;
	char	*line_string;

	if (!line_snip)
		return (NULL);
	string_length = length_to_newline(line_snip);
	line_string = malloc(string_length + 1);
	if (line_string == NULL)
		return (NULL);
	copy_string(line_snip, line_string);
	return (line_string);
}

int	length_to_newline(t_list *line_snip)
{
	int	i;
	int	length;

	length = 0;
	if (line_snip == NULL)
		return (0);
	while (line_snip)
	{
		i = 0;
		while (line_snip->string[i])
		{
			if (line_snip->string[i] == '\n')
			{
				++length;
				return (length);
			}
			++i;
			++length;
		}
		line_snip = line_snip->next;
	}
	return (length);
}

#include <fcntl.h>
#include <stdio.h>
int main() {
    int fd;
    char *line;

    // Open the file
    fd = open("test_file.txt", O_RDONLY);
    if (fd < 0) {
        perror("Error opening file");
        return 1;
    }

    // Read lines until end of file
    while ((line = get_next_line(fd)) != NULL) {
        printf("%s\n", line);
        free(line);
    }

    // Close the file
    close(fd);

    return 0;
}
