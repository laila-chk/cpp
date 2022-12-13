#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
  public:
    Intern();
    Intern(const Intern& intern);
    Intern& operator= (const Intern& intern);
    ~Intern();
    class Form *makeForm(std::string name, std::string target);
};

#endif
