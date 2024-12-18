CXXC = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

OBJ = $(FILES:.cpp=.o)

NAME = zombie

$(NAME) : $(OBJ)
	$(CXXC) $(OBJ) -o $(NAME)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)