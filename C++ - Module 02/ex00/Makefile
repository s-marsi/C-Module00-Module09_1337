CXX = c++

CXXFLAGS = -Wall -Wextra -Werror  -std=c++98 -g3

NAME = FirstOrthodox

FILES = main.cpp Fixed.cpp

OBJ = $(FILES:.cpp=.o)


$(NAME) : $(OBJ)
	$(CXX)  -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)