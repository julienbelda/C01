# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: julienbelda <julienbelda@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/01 10:16:08 by julienbelda       #+#    #+#              #
#    Updated: 2025/12/01 10:16:52 by julienbelda      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zomb

SRCS = main.cpp\
		Zombie.cpp\
		zombieHorde.cpp\

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -f

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all