# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sscheini <sscheini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/20 20:02:25 by sscheini          #+#    #+#              #
#    Updated: 2026/03/15 19:57:49 by sscheini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
N_ZOMBIES = 10 

CXX = c++
CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98
CXXDEFINE = -D N_ZOMBIES=$(N_ZOMBIES)
CXXINCLUDES = -I include/

SRCS = 	src/main.cpp		\
		src/Zombie.cpp		\
		src/zombieHorde.cpp	\

OBJS = $(SRCS:src/%.cpp=obj/%.o)

all: $(NAME)

objdir:
	mkdir -p obj

$(NAME): objdir $(OBJS)
	$(CXX) $(CXXFLAGS) $(CXXINCLUDES) $(CXXDEFINE) $(OBJS) -o $(NAME)

obj/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) $(CXXINCLUDES) $(CXXDEFINE) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
