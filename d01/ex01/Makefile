SRC = main.cpp Zombie.cpp zombieHorde.cpp

Flg = -Wall -Wextra -Werror -std=c++98

CC = c++

name = ZombieHord

all: $(name)

$(name) : $(SRC) Zombie.hpp
	$(CC) $(Flg) $(SRC) -o $(name)

fclean:
	rm -rf $(name)

re: fclean all
