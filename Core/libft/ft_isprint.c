/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:31:59 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/02 20:37:22 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isprint() checks for any printable character including space. */

int	ft_isprint(int c)
{
	return (!(c < 32 || 126 < c));
}
