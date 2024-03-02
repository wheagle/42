/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 17:02:10 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/02 20:37:56 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Outputs the string ’s’ to the given file descriptor. */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
