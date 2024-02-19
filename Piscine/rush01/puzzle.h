/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:29:02 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/03 16:53:27 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUZZLE_H
# define PUZZLE_H

typedef struct s_puzzle
{
	int	**grid;
	int	size;
	int	*constraints;
}	t_puzzle;

#endif
