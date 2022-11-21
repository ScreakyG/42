# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francois <francois@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 17:49:17 by francois          #+#    #+#              #
#    Updated: 2022/11/21 16:18:29 by francois         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror 

all: ${NAME}

${NAME}:
	gcc ${FLAGS} -c libft/libft.h libft/*.c
	ar rcs ${NAME} *.o
	gcc ${FLAGS} -g main.c -L. -lft
	./a.out

clean:
	rm -f *.o
	rm -f *.gch
	rm -f a.out

fclean: clean
	rm -f ${NAME}

re: fclean all
