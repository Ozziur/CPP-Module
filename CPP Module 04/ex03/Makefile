# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/25 17:22:38 by mruizzo           #+#    #+#              #
#    Updated: 2022/12/27 16:19:39 by mruizzo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= "Interface & recap"

SRCS			= Character.cpp Ice.cpp Cure.cpp AMateria.cpp MateriaSource.cpp main.cpp 
OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -f
FLAG			= -Wall -Wextra -Werror -I. -std=c++98


all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLAG) -o $(NAME) $(OBJS)


clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)