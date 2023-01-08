# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mruizzo <mruizzo@student.42roma.it>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 15:30:33 by mruizzo           #+#    #+#              #
#    Updated: 2023/01/08 23:30:25 by mruizzo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= "At least this beats coffee-making"

SRCS			= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -f
FLAG			= -Wall -Wextra -Werror  -std=c++98


all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLAG) -o $(NAME) $(OBJS)


clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)