SRC = main.cpp 

Flg = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

CC = c++

name = array 

all: $(name)

$(name) : $(SRC)
		$(CC) $(Flg) $(SRC) -o $(name)

fclean:
		rm -rf $(name)

re: fclean all
