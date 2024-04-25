/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42luxembourg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:29:02 by lfrench           #+#    #+#             */
/*   Updated: 2023/12/02 14:31:51 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUZZLE_H
#define PUZZLE_H

typedef struct
{
	int	**grid;
	int	size;
	int **row_constraints;
	int **col_constraints;
} t_puzzle;

#endif

