Func = main.cpp PhoneBook.cpp

Flags = -Wall -Wextra -Werror -std=c++98

CC = c++

name = phoneBook

all: $(name)

$(name) : $(Func) PhoneBook.hpp 
	$(CC) $(Flags) $(Func) -o $(name)

fclean:
	rm -rf $(name)

re : fclean all
