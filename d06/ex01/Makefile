# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 16:59:54 by hrhirha           #+#    #+#              #
#    Updated: 2021/06/16 17:00:23 by hrhirha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize
CC = clang++ -Wall -Wextra -Werror
SRCS = main.cpp serialize.cpp

all : $(NAME)

$(NAME) : $(SRCS)
	@$(CC) $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all
