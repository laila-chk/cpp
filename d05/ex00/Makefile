Func = main.cpp Bureaucrat.cpp

Flags = -Wall -Wextra -Werror -std=c++98

CC = c++

name = bureaucrat

all: $(name)

$(name) : $(Func) 
	$(CC) $(Flags) $(Func) -o $(name)

fclean:
	rm -rf $(name)

re : fclean all
