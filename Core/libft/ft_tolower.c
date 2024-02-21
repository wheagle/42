/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:00:23 by lfrench           #+#    #+#             */
/*   Updated: 2024/02/21 18:09:39 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* These functions convert lowercase letters to uppercase, and vice versa. */

int	ft_tolower(int c);

int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		c = c + 32;
	return (c);
}
