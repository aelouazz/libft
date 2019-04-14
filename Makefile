# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelouazz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 02:09:28 by aelouazz          #+#    #+#              #
#    Updated: 2019/04/14 16:41:56 by aelouazz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
INCLUDE=./
OBJECTS=ft_*.o
CODE=ft_*.c
FLAGS=-Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(CODE) -I$(INCLUDE)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test:
	gcc -Wall -Werror -Wextra main.c ft_memccpy.c

del:
	rm a.out
