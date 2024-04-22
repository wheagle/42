/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:17:07 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/22 14:17:36 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

typedef struct s_stack
{
	int				data;
	struct s_stack*	next;
} t_stack;

t_stack	*load_stack(int argc, char **argv);
void	push(int num, t_stack **stack);
void	print_stack(t_stack **stack);
void	return_error();
int		ft_atoi(const char *str);

#endif