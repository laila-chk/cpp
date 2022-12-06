Func = main.cpp Animal.cpp Cat.cpp Dog.cpp

Flags = -Wall -Wextra -Werror -std=c++98

CC = c++

name = pet 

all: $(name)

$(name) : $(Func) Animal.hpp
	$(CC) $(Flags) $(Func) -o $(name)

fclean:
	rm -rf $(name)

re : fclean all
