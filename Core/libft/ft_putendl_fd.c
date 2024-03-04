/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:39:27 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/04 12:30:05 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the string ’s’ to the given file descriptor
   followed by a newline. */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return;
	while (*s != '\0')
	{
		if (write(fd, s, 1) == -1)
			return;
		s++;
	}
	if (write(fd, "\n", 1) == -1)
		return;
}
