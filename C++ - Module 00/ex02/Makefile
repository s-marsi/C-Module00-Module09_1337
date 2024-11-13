CC = c++

CFLAGS = -Wall -Wextra -Werror
 
NAME = logFile

FILES = Account.cpp tests.cpp

FILES_O = $(FILES:.cpp=.o)

$(NAME) : $(FILES_O)
	$(CC) $(CFLAGS) $(FILES_O) -o $(NAME)

clean : 
	rm -f $(FILES_O)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
