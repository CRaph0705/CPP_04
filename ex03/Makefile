# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 12:34:46 by rcochran          #+#    #+#              #
#    Updated: 2025/11/18 18:26:21 by rcochran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re

CC			= 	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98
NAME		=	Materia
OBJ_DIR		=	obj/
SRC			=	src/
INCLUDES	=	-I ./includes -MMD -MP
FILES		= 	\
				$(SRC)AMateria.cpp \
				$(SRC)Character.cpp \
				$(SRC)Cure.cpp \
				$(SRC)Ice.cpp \
				$(SRC)ICharacter.cpp \
				$(SRC)IMateriaSource.cpp \
				$(SRC)MateriaSource.cpp \
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