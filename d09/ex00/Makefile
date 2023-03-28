SRC = main.cpp BitcoinExchange.cpp

Flg = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

CC = c++

name = btc 

all: $(name)

$(name) : $(SRC)
		$(CC) $(Flg) $(SRC) -o $(name)

fclean:
		rm -rf $(name)

clean: fclean

re: fclean all
