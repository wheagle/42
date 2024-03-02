/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:39:27 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/02 21:17:51 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the string ’s’ to the given file descriptor. */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	{
		write (fd, &s[i], 1);
		i++;
	}
}
