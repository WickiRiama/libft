# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mriant <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 12:22:38 by mriant            #+#    #+#              #
#    Updated: 2021/11/23 16:35:20 by mriant           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c \
	ft_isdigit.c
OBJ = ${SRCS:%.c=%.o}
FLAGS = -Wall -Wextra -Werror



all: ${NAME} 

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}

${OBJ}: %.o: %.c
	gcc ${FLAGS} -c $< -o $@

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY = all clean fclean re
