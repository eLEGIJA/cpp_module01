# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msafflow <msafflow@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/23 23:04:26 by msafflow          #+#    #+#              #
#    Updated: 2021/01/23 23:27:24 by msafflow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

SRC = main.c

OBJ = main.o

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -Wall -Werror -Wextra $(OBJ) -o $(NAME)

%.o: %.cpp
	clang++ -Wall -Werror -Wextra -c  $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all