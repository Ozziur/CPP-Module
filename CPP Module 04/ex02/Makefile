# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mruizzo <mruizzo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 16:47:47 by mruizzo           #+#    #+#              #
#    Updated: 2023/01/05 21:23:49 by mruizzo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= "Abstract class"

SRCS			= main.cpp AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
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