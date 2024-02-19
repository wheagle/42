/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:39:27 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/11 14:51:30 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that displays a string of characters on the standard 
   output. Here’s how it should be prototyped: */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while(str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char *str = "thisismystring";

	ft_putstr(str);
	write(1, "\n", 1);

	return (0);
}*/
