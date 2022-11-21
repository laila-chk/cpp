PRG = main.cpp

CC = c++

Fg = -Wall -Wextra -Werror -std=c++98

name = Replace

all: $(name)

$(name) : main.cpp
	$(CC) $(Fg) $(PRG) -o $(name)

clean :
	rm -rf $(name)

fclean :
	rm -rf $(name) *.replace

re : fclean all

