SRC = main.cpp  RPN.cpp

Flg = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

CC = c++

name = RPN 

all: $(name)

$(name) : $(SRC)
		$(CC) $(Flg) $(SRC) -o $(name)

fclean:
		rm -rf $(name)

clean: fclean

re: fclean all
