# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/18 09:41:03 by hrhirha           #+#    #+#              #
#    Updated: 2021/06/18 09:41:07 by hrhirha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = exec
CC = clang++ -Wall -Wextra -Werror
SRCS = main.cpp

all : $(NAME)

$(NAME) : $(SRCS)
	@$(CC) $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all
