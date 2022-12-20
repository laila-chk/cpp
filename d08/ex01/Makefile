SRC = main.cpp Span.cpp

Flg = -Wall -Wextra -Werror -std=c++98

CC = c++

name = span

all: $(name)

$(name) : $(SRC)
		$(CC) $(Flg) $(SRC) -o $(name)

fclean:
		rm -rf $(name)

re: fclean all
