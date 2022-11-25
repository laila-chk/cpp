PRG = main.cpp Harl.cpp

CC = c++

Fg = -Wall -Wextra -Werror -std=c++98

name = Harl

all: $(name)

$(name) : $(PRG) Harl.hpp
	$(CC) $(Fg) $(PRG) -o $(name)

fclean :
	rm -rf $(name) 

re : fclean all
