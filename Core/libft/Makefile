# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 14:30:38 by lfrench           #+#    #+#              #
#    Updated: 2024/02/19 15:08:07 by lfrench          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_isalpha.c
OBJS = $(SRCS:.c=.o)

all: $(NAME) clean

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)	

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
	
.PHONY: all clean fclean re
