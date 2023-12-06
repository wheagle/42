/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:46:51 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/06 14:03:47 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb);

char *ft_strncat(char *dest, char *src, unsigned int nb);
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != 0)
		i++;
	j = 0;
	while (j< nb && src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
