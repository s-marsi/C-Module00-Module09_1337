CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Harl

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all : fclean 

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
