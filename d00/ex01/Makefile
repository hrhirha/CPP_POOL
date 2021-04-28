# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/28 08:28:48 by hrhirha           #+#    #+#              #
#    Updated: 2021/04/28 10:29:36 by hrhirha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp Contact.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean

re: fclean all
