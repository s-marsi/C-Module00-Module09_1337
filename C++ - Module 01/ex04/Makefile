CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = TextReplacer

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all : fclean 

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
