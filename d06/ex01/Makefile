SRC = main.cpp serialization.cpp

Flg = -Wall -Wextra -Werror -std=c++98

CC = c++

name = cast

all: $(name)

$(name) : $(SRC) 
	$(CC) $(Flg) $(SRC) -o $(name)

fclean:
	rm -rf $(name)

re: fclean all
