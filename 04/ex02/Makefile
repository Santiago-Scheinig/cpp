# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/20 20:02:25 by sscheini          #+#    #+#              #
#    Updated: 2026/06/19 18:48:07 by sscheini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CXX = c++
CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98
CXXINCLUDES = -I include/

SRCS =	src/main.cpp		\
		src/AAnimal.cpp		\
		src/Brain.cpp		\
		src/Cat.cpp			\
		src/Dog.cpp			\
		src/WrongAnimal.cpp	\
		src/WrongCat.cpp	\

OBJS = $(SRCS:src/%.cpp=obj/%.o)

all: $(NAME)

objdir:
	mkdir -p obj

$(NAME): objdir $(OBJS)
	$(CXX) $(CXXFLAGS) $(CXXINCLUDES) $(OBJS) -o $(NAME)

obj/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) $(CXXINCLUDES) -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
