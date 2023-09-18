# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 18:25:40 by tmoumni           #+#    #+#              #
#    Updated: 2023/09/18 18:45:32 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon
HEADER = Weapon.hpp HumanA.hpp HumanB.hpp

CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
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