# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcochran <rcochran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 12:34:46 by rcochran          #+#    #+#              #
#    Updated: 2025/10/31 13:24:22 by rcochran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY : all clean fclean re

CC			= 	c++
CFLAGS		=	-Wall -Werror -Wextra -Wno-unused -std=c++98
NAME		=	Materia
OBJ_DIR		=	obj/
SRC			=	src/
INCLUDES	=	-I ./includes
FILES		= 	\
				$(SRC)AMateria.cpp \
				$(SRC)ICharacter.cpp 

MAIN		= 	$(SRC)main.cpp
all : $(NAME)

clean :
	rm -rf $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all

$(NAME) : $(OBJ_DIR)
	$(CC) $(CFLAGS) $(FILES) $(MAIN) $(INCLUDES) -o $(NAME)

$(OBJ_DIR) :
	mkdir $(OBJ_DIR)