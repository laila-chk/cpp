#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp" 

class Form 
{
  private:
    const std::string _name; 
    bool _signed;
    const int _execGrade;
    const int _signGrade;
  public:
    Form();
    Form(const std::string name, const int execGrade, const int signGrade);
    Form(const Form& form);
    Form& operator= (const Form& form);
    ~Form();

    /* --------------- getters and setters-------------*/
    std::string getName() const ;
    int getExecGrade() const;
    int getSingGrade() const;
    bool getStatus() const;

    /* --------------- exceptions   -------------------*/
    class GradeTooLowException;
    class GradeTooHighException;
    class NotSignedException;

    /* --------------- exceptions   -------------------*/
    void beSigned(class Bureaucrat& br);

    virtual void execute(const Bureaucrat& executor) const = 0;
};


class Form::GradeTooLowException: public std::exception
{
  public:
  const char* what() const throw ();
};


class Form::GradeTooHighException: public std::exception
{
  public:
  const char* what() const throw ();
};

class Form::NotSignedException: public std::exception
{
  public:
  const char* what() const throw ();
};

std::ostream& operator<< (std::ostream& os, const Form& br);

#endif
