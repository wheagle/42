/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:24:34 by lfrench           #+#    #+#             */
/*   Updated: 2024/04/15 20:31:20 by lfrench          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>

int				ft_printf(const char *format, ...);
int     		ft_print_formatted(char specifier, va_list arg_ptr);
int     		ft_print_char(char c);
int 			ft_print_str(char *str);
int 			ft_print_ptr(void *ptr);
int 			ft_print_nbr(int nbr);
unsigned int 	ft_print_unbr(unsigned int nbr);
int				ft_print_hex(unsigned long nbr, int ltr_case);
void			*ft_bzero(void *s, size_t n);

#endif
