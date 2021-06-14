# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/14 16:34:07 by hrhirha           #+#    #+#              #
#    Updated: 2021/06/14 16:54:19 by hrhirha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert
CC = clang++ -Wall -Wextra -Werror
SRCS = main.cpp types.cpp convert.cpp

all : $(NAME)

$(NAME) : $(SRCS)
	@$(CC) $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all
