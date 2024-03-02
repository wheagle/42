/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:07:32 by lfrench           #+#    #+#             */
/*   Updated: 2024/03/02 20:36:36 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* isalpha() checks for an alphabetic character; in the standard "C" locale, 
   it is equivalent to (isupper(c) || islower(c)).  In some locales, there may 
   be additional characters for which isalpha() is true—letters which are 
   neither uppercase nor lowercase. */

int	ft_isalpha(int c)
{
	if (c < 65 || 122 < c || (c > 90 && 97 > c))
		return (0);
	else
		return (1);
}
