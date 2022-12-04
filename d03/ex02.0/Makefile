SRC = main.cpp ClapTrap.cpp ScavTrap.cpp 

Flg = -Wall -Wextra -Werror -std=c++98

CC = c++

name = Clap

all: $(name)

$(name) : $(SRC) ClapTrap.hpp ScavTrap.hpp
	$(CC) $(Flg) $(SRC) -o $(name)

fclean:
	rm -rf $(name)

re: fclean all
