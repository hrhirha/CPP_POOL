NAME = replace
CC = clang++
FLAGS = -Wall -Wextra -Werror
SRCS = main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	@rm -rf *.replace

fclean: clean
	@rm -rf $(NAME)

re: fclean all