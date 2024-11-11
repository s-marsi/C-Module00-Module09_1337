CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

SRC = main.cpp Contact.cpp PhoneBook.cpp utils.cpp

OBJ = $(SRC:.cpp=.o)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

all : $(NAME)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f  $(NAME)

re : fclean $(NAME)