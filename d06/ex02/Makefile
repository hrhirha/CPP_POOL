# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 17:00:38 by hrhirha           #+#    #+#              #
#    Updated: 2021/06/16 17:01:22 by hrhirha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify
CC = clang++ -Wall -Wextra -Werror
SRCS = main.cpp identify.cpp Base.cpp

all : $(NAME)

$(NAME) : $(SRCS)
	@$(CC) $(SRCS) -o $(NAME)

clean :
	@rm -rf $(NAME)

fclean : clean

re : fclean all