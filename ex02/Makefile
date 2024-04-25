# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 17:27:29 by hshimizu          #+#    #+#              #
#    Updated: 2024/04/25 16:46:55 by hshimizu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= tests

CXXFLAGS	:= -Wall -Wextra -Werror
CXXFLAGS	+= -std=c++98

SRCS		= tests.cpp
SRCS		+= Account.cpp

$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.PHONY: clean
clean: $(NAME)
	$(RM) $^
