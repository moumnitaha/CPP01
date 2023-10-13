# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 16:43:47 by tmoumni           #+#    #+#              #
#    Updated: 2023/10/13 15:00:03 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
HEADER = Harl.hpp

CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) $(STD) -o $@
%.o : %.cpp $(HEADER)
		$(CC) $(FLAGS) -c $< $(STD) -o $@

clean:
		$(RM) $(OBJ)
fclean:
		$(RM) $(OBJ) $(NAME)
re: fclean all