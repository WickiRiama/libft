# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mriant <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 12:22:38 by mriant            #+#    #+#              #
#    Updated: 2021/12/06 13:10:51 by mriant           ###   ########.fr        #
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
	ft_putnbr_fd.c

BONUS_SRCS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c

OBJ = ${SRCS:%.c=%.o}

BONUS_OBJ = ${BONUS_SRCS:%.c=%.o}

FLAGS = -Wall -Wextra -Werror

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

all: ${NAME} bonus

bonus: ${NAME} ${BONUS_OBJ}
	ar rcs ${NAME} ${BONUS_OBJ}

${OBJ}: %.o: %.c
	gcc ${FLAGS} -c $< -o $@

${BONUS_OBJ}: %.o: %.c
	gcc ${FLAGS} -c $< -o $@

clean:
	rm -rf ${OBJ} ${BONUS_OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean ${NAME}

.PHONY = all clean fclean re
