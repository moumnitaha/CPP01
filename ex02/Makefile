# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 18:17:47 by tmoumni           #+#    #+#              #
#    Updated: 2023/09/18 18:18:15 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = STR

CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) $(STD) -o $@
%.o : %.cpp
		$(CC) $(FLAGS) -c $< $(STD) -o $@

clean:
		rm $(OBJ)
fclean:
		rm $(OBJ) $(NAME)
re: fclean all