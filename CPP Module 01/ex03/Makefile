# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 15:21:54 by mruizzo           #+#    #+#              #
#    Updated: 2022/12/14 18:50:46 by mruizzo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= "Unnecessary violence"
	
SRCS			= main.cpp 
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