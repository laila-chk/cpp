src = megaphone.cpp

CC = c++

Flags = -Wall -Wextra -Werror -std=c++98

name = megaphone

all: $(name)
	
$(name) :
	$(CC) $(Flags) $(src) -o $(name)

clean:
	rm -rf $()

fclean :
	rm -rf $(name)

re: fclean all
