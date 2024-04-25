/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:03:42 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/03 13:04:26 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_int(int i_to_c)
{
	char c;

	c = i_to_c + 48;

	write(1, &c, 1);

}

void ft_write_newline(void)
{
	write(1, "\n", 1);
}
