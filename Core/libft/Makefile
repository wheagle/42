# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lfrench <lfrench@student.42luxembourg.lu>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 14:30:38 by lfrench           #+#    #+#              #
#    Updated: 2024/02/21 17:26:32 by lfrench          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
#	ft_isprint.c \
#	ft_strlen.c \
#	ft_memset.c \
#	ft_bzero.c \
#	ft_memcpy.c \
#	ft_memmove.c \
#	ft_strlcpy.c \
#	ft_strlcat.c \
#	ft_toupper.c \
#	ft_tolower.c \
#	ft_strchr.c \
#	ft_strrchr.c \
#	ft_strncmp.c \ 
#	ft_memchr.c \
#	ft_memcmp.c \
#	ft_strnstr.c \
#	ft_atoi.c \
#	ft_calloc.c \
#	ft_strdup.c \
#	ft_substr.c \
#	ft_strjoin.c \
#	ft_strtrim.c \
#	ft_split.c \
#	ft_itoa.c \
#	ft_strmapi.c \
#	ft_striteri.c \
#	ft_putchar_fd.c \
#	ft_putstr_fd.c \
#	ft_putendl_fd.c \
#	ft_putnbr_fd.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME) clean

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)	

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) test_libft

re: fclean $(NAME)

test: all 
	cc -o test_libft test_main.c libft.a

.PHONY: all clean fclean re test
