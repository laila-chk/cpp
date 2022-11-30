Func = main.cpp Fixed.cpp 

Flags = -Wall -Wextra -Werror -std=c++98

CC = c++

name = fixed 

all: $(name)

$(name) : $(Func) Fixed.hpp
	$(CC) $(Flags) $(Func) -o $(name)

fclean:
	rm -rf $(name)

re : fclean all
