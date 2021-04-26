# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/19 09:19:49 by hrhirha           #+#    #+#              #
#    Updated: 2021/04/19 09:27:36 by hrhirha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CCP = clang++ -Wall -Wextra -Werror

SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	@$(CCP) $(SRC) -o $(NAME)

clean :
	@rm -rf $(NAME)

re: clean $(NAME)
