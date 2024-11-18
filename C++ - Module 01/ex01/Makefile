CXXC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

FILES =  Zombie.cpp zombieHorde.cpp main.cpp

OBJ = $(FILES:.cpp=.o)

$(NAME) : $(OBJ)
	$(CXXC) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re  : fclean $(NAME)