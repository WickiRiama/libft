# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mriant <mriant@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 12:22:38 by mriant            #+#    #+#              #
#    Updated: 2022/02/15 10:58:59 by mriant           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_printf.c \
	ft_printint.c \
	ft_printstr.c \
	ft_printuint.c

OBJ = ${SRCS:%.c=%.o}

DEPS = ${SRCS:.c=.d}

FLAGS = -Wall -Wextra -Werror -g -MMD

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

all: ${NAME}

%.o: %.c
	cc ${FLAGS} -c $< -o $@

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re

-include ${DEPS}