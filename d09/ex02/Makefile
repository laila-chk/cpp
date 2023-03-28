SRC = main.cpp PmergeMe.cpp

Flg = -Wall -Wextra -Werror -std=c++98

CC = c++

name = PmergeMe 

all: $(name)

$(name) : $(SRC)
		$(CC) $(Flg) $(SRC) -o $(name)

fclean:
		rm -rf $(name)

re: fclean all
