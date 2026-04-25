# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sscheini <sscheini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/20 20:02:25 by sscheini          #+#    #+#              #
#    Updated: 2026/03/18 19:21:48 by sscheini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex04

CXX = c++
CXXFLAGS = -g -Wall -Wextra -Werror -std=c++98
CXXINCLUDES = -I include/

SRCS = 	src/main.cpp	\

OBJS = $(SRCS:src/%.cpp=obj/%.o)

all: $(NAME)

test1:
	@printf "\nTest 1: \n./ex04 src/test1.txt \"world\" \"C++\"\n"
	@printf "\nInput file: \n"; cat src/test1.txt
	@./ex04 src/test1.txt "world" "C++"
	@printf "\nOutput file: \n"; cat src/test1.txt.replace;

test2:
	@printf "\nTest 2: \n./ex04 src/test2.txt \"aaa\" \"xxx\"\n"
	@printf "\nInput file: \n"; cat src/test2.txt
	@./ex04 src/test2.txt "aaa" "xxx"
	@printf "\nOutput file: \n"; cat src/test2.txt.replace;

test3:
	@printf "\nTest 3: \n./ex04 src/test3.txt \"xyz\" \"abc\"\n"
	@printf "\nInput file: \n"; cat src/test3.txt
	@./ex04 src/test3.txt "xyz" "abc"
	@printf "\nOutput file: \n"; cat src/test3.txt.replace;

test4:
	@printf "\nTest 4: \n./ex04 src/test4.txt \"cat\" \"dog\"\n"
	@printf "\nInput file: \n"; cat src/test4.txt
	@./ex04 src/test4.txt "cat" "dog"
	@printf "\nOutput file: \n"; cat src/test4.txt.replace;

test5:
	@printf "\nTest 5: \n./ex04 src/test5.txt \"hello\" \"bye\"\n"
	@printf "\nInput file: \n"; cat src/test5.txt
	@./ex04 src/test5.txt "hello" "bye"
	@printf "\nOutput file: \n"; cat src/test5.txt.replace;

test6:
	@printf "\nTest 6: \n./ex04 src/test6.txt \"cat\" \"dog\"\n"
	@printf "\nInput file: \n"; cat src/test6.txt
	@./ex04 src/test6.txt "cat" "dog"
	@printf "\nOutput file: \n"; cat src/test6.txt.replace;

test7:
	@printf "\nTest 7: \n./ex04 src/test7.txt \"ha\" \"haha\"\n"
	@printf "\nInput file: \n"; cat src/test7.txt
	@./ex04 src/test7.txt "ha" "haha"
	@printf "\nOutput file: \n"; cat src/test7.txt.replace;

test8:
	@printf "\nTest 8: \n./ex04 src/test8.txt \"a\" \"b\"\n"
	@printf "\nInput file: \n"; cat src/test8.txt
	@./ex04 src/test8.txt "a" "b"
	@printf "\nOutput file: \n"; cat src/test8.txt.replace;

test9:
	@printf "\nTest 9: \n./ex04 src/test9.txt \"a\" \"b\"\n"
	@printf "\nInput file: \n"; cat src/test9.txt
	@./ex04 src/test9.txt "a" "b"
	@printf "\nOutput file: \n"; cat src/test9.txt.replace;

test10:
	@printf "\nTest 10: \n./ex04 src/test10.txt \"world\" \"\"\n"
	@printf "\nInput file: \n"; cat src/test10.txt
	@./ex04 src/test10.txt "world " ""
	@printf "\nOutput file: \n"; cat src/test10.txt.replace;

tests: test1 test2 test3 test4 test5 test6 test7 test8 test9 test10

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
	rm -f src/*.replace

re: fclean all

.PHONY: all clean fclean re
