/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 23:25:31 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/06 23:29:01 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Counts the number of nodes in a list. 
   Return value: The length of the list. */

#include <stdlib.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	len;

	len = 0;
	if (lst)
	{
		while (lst->next != NULL)
		{
			lst++;
			len++;
		}
	}
	return (len)
}
