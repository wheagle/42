/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:07:32 by lfrench           #+#    #+#             */
/*   Updated: 2024/02/21 12:10:31 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isdigit() checks for a digit (0 through 9). */

int	ft_isdigit(int c);

int	ft_isdigit(int c)
{
	if (c < 48 || 57 < c)
		return (0);
	else
		return (1);
}
