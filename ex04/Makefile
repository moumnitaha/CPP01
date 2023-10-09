# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 11:18:07 by tmoumni           #+#    #+#              #
#    Updated: 2023/10/09 14:41:47 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FileStream

CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) $(STD) -o $@
%.o : %.cpp
		$(CC) $(FLAGS) -c $< $(STD) -o $@

clean:
		$(RM) $(OBJ)
fclean: clean
		$(RM) $(NAME)
re: fclean all