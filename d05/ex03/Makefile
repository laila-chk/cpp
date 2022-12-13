Func = main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

Flags = -Wall -Wextra -Werror -std=c++98

CC = c++

name = Signature 

all: $(name)

$(name) : $(Func) 
	$(CC) $(Flags) $(Func) -o $(name)

fclean:
	rm -rf $(name)

re : fclean all
