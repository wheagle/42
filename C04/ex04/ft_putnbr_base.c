/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:19:24 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/12 11:22:24 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that displays a number in a base system in the terminal.
• This number is given in the shape of an int, and the radix in the shape of a string
of characters.
• The base-system contains all useable symbols to display that number :
◦ 0123456789 is the commonly used base system to represent decimal numbers
◦ 01 is a binary base system ;
◦ 0123456789ABCDEF an hexadecimal base system ;
◦ poneyvif is an octal base system.
• The function must handle negative numbers.
• If there’s an invalid argument, nothing should be displayed. Examples of invalid
arguments :
◦ base is empty or size of 1;
◦ base contains the same character twice ;
◦ base contains + or - ;
• Here’s how it should be prototyped :*/

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);



void	ft_putnbr_base(int nbr, char *base)
{
	
}
