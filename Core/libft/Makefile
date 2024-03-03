# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 14:30:38 by lfrench           #+#    #+#              #
#    Updated: 2024/03/03 18:32:55 by lfrench          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_strchr.c \
	ft_striteri.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c
#	ft_memchr.c \
#	ft_memcmp.c \
#	ft_calloc.c \
#	ft_strdup.c \
#	ft_substr.c \
#	ft_strjoin.c \
#	ft_strtrim.c \
#	ft_split.c \
#	ft_itoa.c \
#	ft_strmapi.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)	

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
#	$(RM) test/test_libft
#	$(RM) test/test_output.txt
#	$(RM) test/test_output2.txt
#	$(RM) test/test_output3.txt
#	$(RM) test/test_output4.txt

re: fclean $(NAME)

#test: re
#	cc -o test/test_libft test/test_main.c libft.a
#	./test/test_libft

.PHONY: all clean fclean re
