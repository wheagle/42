/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:50:38 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/03 12:07:51 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* See man atoi and strol */

#include <stddef.h>

int	ft_atoi(const char *str)
{
	int		result;
	int		sign;
	size_t	i;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
