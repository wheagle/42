/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:59:07 by lfrench           #+#    #+#             */
/*   Updated: 2024/02/21 17:53:24 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isalnum() checks for an alphanumeric character; 
   it is equivalent to (isalpha(c) || isdigit(c)). */

#include "libft.h"

int	ft_isalnum(int c);

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
