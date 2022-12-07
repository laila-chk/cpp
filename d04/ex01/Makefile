Func = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

Flags = -Wall -Wextra -Werror -std=c++98

CC = c++

name = smartPet 

all: $(name)

$(name) : $(Func) Animal.hpp
	$(CC) $(Flags) $(Func) -o $(name)

fclean:
	rm -rf $(name)

re : fclean all
