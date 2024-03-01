/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:02:10 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/01 16:44:56 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the string ’s’ to the given file descriptor. */

#include <unistd.h>

void	ft_putchar_fd(char *s, int fd);

void	ft_putchar_fd(char *s, int fd)
{
	unsigned int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	write(fd, s, len);
}
