CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = ClapTrap

FILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ = $(FILES:.cpp=.o)

$(NAME) : $(OBJ)
	$(CXX)  $(OBJ) -o  $(NAME)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean $(NAME)