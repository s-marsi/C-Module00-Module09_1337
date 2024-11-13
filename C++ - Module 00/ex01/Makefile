CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

FILES = PhoneBook.cpp Contact.cpp utils.cpp main.cpp

FILES_O = $(FILES:.cpp=.o)

$(NAME) : $(FILES_O)
	$(CC) $(CFLAGS) $(FILES_O) -o $(NAME)

clean : 
	rm -f $(FILES_O)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
