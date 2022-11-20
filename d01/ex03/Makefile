SRC =	main.cpp  Weapon.cpp  HumanA.cpp  HumanB.cpp 

Flg = -Wall -Wextra -Werror -std=c++98

CC = c++

name = file 

all: $(name)

$(name) : $(SRC)
	$(CC) $(Flg) $(SRC) -o $(name)

fclean:
	rm -rf $(name)

re: fclean all
