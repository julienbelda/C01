# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/01 10:15:02 by julienbelda       #+#    #+#              #
#    Updated: 2025/12/01 10:27:43 by julienbelda      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exo

SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean: 
	$(RM) $(OBJS)ls

fclean: clean
	$(RM) $(NAME)

re: fclean all