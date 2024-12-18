CXX = c++

CXXFLAGS = -Wall -Wextra -Werror #-fsanitize=address

NAME = Fixed

FILES = main.cpp Fixed.cpp

OBJ = $(FILES:.cpp=.o)

$(NAME) : $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)