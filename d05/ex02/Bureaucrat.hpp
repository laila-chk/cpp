#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class Bureaucrat {
  private:
    const std::string _name;
    int _grade;
  public:
    /*Canonical form reqs:*/
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat& br);
    Bureaucrat& operator= (const Bureaucrat& br);
    ~Bureaucrat();


    /*getters and setters:*/
    std::string getName()const;
    int getGrade()const;
    void gradeUp();
    void gradeDown();

    /*a Class def*/
    class GradeTooHighException;
    class GradeTooLowException;

    void signForm(class Form& form);
 };

class Bureaucrat::GradeTooLowException: public std::exception
{
  public:
  const char* what() const throw ();
};


class Bureaucrat::GradeTooHighException: public std::exception
{
  public:
  const char* what() const throw ();
};

std::ostream& operator<< (std::ostream& os, const Bureaucrat& br);

#endif
