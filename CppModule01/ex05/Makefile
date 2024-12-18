CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Harl

SRC = main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)


$(NAME) : $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)
