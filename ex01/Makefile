SRC = main.cpp Span.cpp
OBJ = $(SRC:.cpp=.o)

CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Span

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY: all re clean fclean
