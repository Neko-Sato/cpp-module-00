# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 17:27:29 by hshimizu          #+#    #+#              #
#    Updated: 2024/03/25 00:26:23 by hshimizu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= PhoneBook

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror
CXXFLAGS	+= -std=c++98 -pedantic

INCS_DIR	= -I.

SRCS		= main.cpp
SRCS		+= Contact.cpp
SRCS		+= PhoneBook.cpp

$(NAME): $(SRCS)
	$(CXX) -g $(CXXFLAGS) $(INCS_DIR) $^ -o $@
