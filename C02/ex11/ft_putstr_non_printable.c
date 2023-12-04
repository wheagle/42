/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 22:30:07 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/04 22:53:44 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that displays a string of characters onscreen. If this
   string contains characters that aren’t printable, they’ll have to be 
   displayed in the shape of hexadecimals (lowercase), 
   preceeded by a "backslash". 
   For example : Coucou\ntu vas bien ? 
   The function should display : Coucou\0atu vas bien ? 
 */

#include <unistd.h>

void ft_putstr_non_printable(char *str);

void ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;
	char	msb;
	char	lsb;

	i = 0;
	while (str[i] != 0)
	{
		c = str[i];
		if (c > 31 && c < 127)
			write(1, &c, 1);
		else if (c < 31)
		{
			write(1, "\\", 1);
			msb = (c / 16) + 48;
			write(1, &msb, 1);
			if ((c % 16) < 10)
				lsb = (c % 16) + 48;
			else
				lsb = (c % 16) + 87;
			write(1, &lsb, 1);
		}
		i++;
	}	
}
/*
int			main(void)
{
	char	*str = "Coucou\ntu v\\as bi\aen ?";

	ft_putstr_non_printable(str);
	return (0);
}*/
