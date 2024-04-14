/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:24:34 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/14 21:48:49 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "../libft/libft.a"

int		ft_printf(const char *format, ...);
//char	*ft_c_to_str(char *c_input);
//char	*ft_s_to_str(char *s_input);
char	*ft_p_to_str(char *p_input);
char	*ft_d_to_str(char *d_input);
char	*ft_i_to_str(char *i_input);
char	*ft_u_to_str(char *u_input);
char	*ft_x_to_str(char *x_input);
char	*ft_X_to_str(char *X_input);
char	*ft_perc_to_str(char *perc_input);

#endif
