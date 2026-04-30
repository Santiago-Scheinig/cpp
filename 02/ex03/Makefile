# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sscheini <sscheini@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/20 20:02:25 by sscheini          #+#    #+#              #
#    Updated: 2026/04/27 17:23:07 by sscheini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =

CXX = c++
CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98
CXXINCLUDES = -I include/

SRCS =

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
