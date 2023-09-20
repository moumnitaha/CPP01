# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 16:43:47 by tmoumni           #+#    #+#              #
#    Updated: 2023/09/20 22:04:53 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
HEADER = Harl.hpp

CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) $(STD) -o $@
%.o : %.cpp $(HEADER)
		$(CC) $(FLAGS) -c $< $(STD) -o $@

clean:
		rm $(OBJ)
fclean:
		rm $(OBJ) $(NAME)
re: fclean all