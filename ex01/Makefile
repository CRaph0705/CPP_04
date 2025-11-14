# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/29 10:10:52 by rcochran          #+#    #+#              #
#    Updated: 2025/11/14 18:57:33 by rcochran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re

CC			= 	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98
NAME		=	Brain
OBJ_DIR		=	obj/
SRC			=	src/
INCLUDES	=	-I ./includes -MMD -MP
FILES		= 	\
				$(SRC)Animal.cpp \
				$(SRC)Cat.cpp \
				$(SRC)Dog.cpp \
				$(SRC)WrongAnimal.cpp \
				$(SRC)WrongCat.cpp \
				$(SRC)Brain.cpp \
				$(MAIN)

OBJ			=	$(patsubst $(SRC)%.cpp, $(OBJ_DIR)%.o, $(FILES))

MAIN		= 	$(SRC)main.cpp
all : $(NAME)

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

$(NAME) : $(OBJ_DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(INCLUDES) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC)%.cpp
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@


$(OBJ_DIR) :
	mkdir $(OBJ_DIR)