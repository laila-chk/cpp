SRC = main.cpp ClapTrap.cpp FragTrap.cpp 

Flg = -Wall -Wextra -Werror -std=c++98

CC = c++

name = Frag

all: $(name)

$(name) : $(SRC) ClapTrap.hpp FragTrap.hpp
	$(CC) $(Flg) $(SRC) -o $(name)

fclean:
	rm -rf $(name)

re: fclean all
