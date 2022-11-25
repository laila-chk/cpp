PRG = main.cpp Replace.cpp

CC = c++

Fg = -Wall -Wextra -Werror -std=c++98

name = Replace

all: $(name)

$(name) : $(PRG) Replace.hpp 
	$(CC) $(Fg) $(PRG) -o $(name)

clean :
	rm -rf $(name)

fclean :
	rm -rf $(name) *.replace

re : fclean all

