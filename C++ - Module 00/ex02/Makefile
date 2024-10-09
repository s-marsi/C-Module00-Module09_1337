CC = c++

CFLAG = -Wall -Wextra -Werror -std=c++98

NAME = lostFile

SRC = Account.cpp tests.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
	$(CC) $(CFLAG) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
