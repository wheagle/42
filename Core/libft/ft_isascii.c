/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:16:40 by lfrench           #+#    #+#             */
/*   Updated: 2024/02/21 17:19:50 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isascii() checks whether c is a 7-bit unsigned char value that 
   fits into the ASCII character set. */

int	ft_isascii(int c);

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
