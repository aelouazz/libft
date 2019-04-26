# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelouazz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 02:09:28 by aelouazz          #+#    #+#              #
#    Updated: 2019/04/26 01:33:40 by aelouazz         ###   ########.fr        #
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

re: fclean $(NAME)

test:
	gcc -g main.c -o test -L. -lft

del:
	rm test
	rm -rf test.dSYM

retest: del test
