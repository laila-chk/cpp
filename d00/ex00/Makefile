src = megaphone.cpp

CC = c++

Flags = -Wall -Wextra -Werror -std=c++98

name = megaphone

all: $(name)
	
$(name) : $(src)
	$(CC) $(Flags) $(src) -o $(name)

fclean :
	rm -rf $(name)

re: fclean all
