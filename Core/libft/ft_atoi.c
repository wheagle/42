/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:50:38 by lfrench           #+#    #+#             */
/*   Updated: 2024/02/23 15:18:43 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that converts the initial portion of the string pointed by 
   str to its int representation
   The string can start with an arbitray amount of white space 
   (as determined by isspace(3))
   The string can be followed by an arbitrary amount of + and - signs, 
   - sign will change the sign of the int returned based on the number of - is 
   odd or even. 
   Finally the string can be followed by any numbers of the base 10.
   Your function should read the string until the string stop following the 
   rules and return the number found until now. 
   You should not take care of overflow or underflow. result can be undefined 
   in that case. 
   Here’s an example of a program that prints the atoi return value:
   $>./a.out " ---+--+1234ab567"
   -1234
   Here’s how it should be prototyped: */

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{	
	int	result;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
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
