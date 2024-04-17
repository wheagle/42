# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfrench <lfrench@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 14:30:38 by lfrench           #+#    #+#              #
#    Updated: 2024/04/17 10:22:04 by lfrench          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c ft_printf_str.c ft_print_nbr.c ft_print_ptr.c ft_print_hex.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)	

clean:
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME)
	$(RM) ft_printf

re: fclean $(NAME)

test: all
	cc -Wall -Wextra -Werror main.c libftprintf.a -o ft_printf

.PHONY: all clean fclean re test
