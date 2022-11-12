# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francois <francois@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 17:49:17 by francois          #+#    #+#              #
#    Updated: 2022/11/12 17:08:02 by francois         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror 

all: ${NAME}

${NAME}:
	gcc ${FLAGS} -c libft.h *.c
	ar rcs ${NAME} *.o

clean:
	rm -f *.o
	rm -f *.gch

fclean: clean
	rm -f ${NAME}

re: fclean all