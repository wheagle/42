/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:18:50 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/22 14:23:13 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

int main(int argc, char **argv) 
{
	t_stack	*a;

	a = load_stack(argc, argv);
	print_stack(&a);
    return 0;
}

t_stack	*load_stack(int argc, char **argv)
{
	t_stack	*a;

	a = NULL;
	if (argc < 2)
		return_error();
//	if (argc == 2)
		//Just one number? Finished? Print? Parse the args from a single string?
	else
	{
		argv++;
		while (*argv)
		{
			push(ft_atoi(*argv), &a);
			argv++;
		}
	}
	return (a);
}
void	return_error()
{
	write(STDERR_FILENO, "Error\n", 6);
	exit(1);
}

void	push(int num, t_stack **member)
{
	t_stack	*new;

	if (!*member)
	{
		*member = malloc(sizeof (t_stack));
		if (!*member)
			return_error();
		(*member)->data = num;
		(*member)->next = NULL;
	}
	else
	{
		new = malloc(sizeof (t_stack));
		if (!new)
			return_error();
		new->data = num;
		new->next = *member;
		*member = new;
	}
}

void	print_stack(t_stack **stack)
{
	while (*stack)
	{
		ft_itoa(*stack->data);
		write(1, "\n", 1);
		*stack = (*stack)->next;
	}
}



int	ft_atoi(const char *str)
{
	int		result;
	int		sign;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}