# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 17:27:29 by hshimizu          #+#    #+#              #
#    Updated: 2024/03/27 02:59:12 by hshimizu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= tests

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror
CXXFLAGS	+= -std=c++98 -pedantic

INCS_DIR	= -I.

SRCS		= tests.cpp
SRCS		+= Account.cpp

$(NAME): $(SRCS)
	$(CXX) -g $(CXXFLAGS) $(INCS_DIR) $^ -o $@

.PHONY: clean
clean: $(NAME)
	rm -f $^
