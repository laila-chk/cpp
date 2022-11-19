SRC = main.cpp Zombie.cpp

Flg = -Wall -Wextra -Werror -std=c++98

CC = c++

name = Zombie

all: $(name)

$(name) : $(SRC) Zombie.hpp
	$(CC) $(Flg) $(SRC) -o $(name)

fclean:
	rm -rf $(name)

re: fclean all
