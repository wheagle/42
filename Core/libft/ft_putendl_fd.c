/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:39:27 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/01 17:55:37 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the string ’s’ to the given file descriptor
   followed by a newline. */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd)
{
	int		i;

	i = 0;
	while(s[i] != 0)
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
