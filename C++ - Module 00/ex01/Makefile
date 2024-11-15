CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = phonebook

FILES = PhoneBook.cpp Contact.cpp utils.cpp main.cpp

FILES_O = $(FILES:.cpp=.o)

$(NAME) : $(FILES_O)
	$(CXX) $(CXXFLAGS) $(FILES_O) -o $(NAME)

clean : 
	rm -f $(FILES_O)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
