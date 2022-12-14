/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 09:51:03 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/13 18:02:30 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Halima"), _grade(150)
{
  std::cout << "default constructor for Bureaucrat was called, name and grade ";
  std::cout << "weren't passed, initialising them with 'Halima' and 150"<<std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
  if (grade < 1)
    throw GradeTooHighException();
  if (grade > 150)
    throw GradeTooLowException();
  std::cout << "Default constructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& br): _name(br._name), _grade(br._grade)
{
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& br)
{
  this->_grade = br._grade;
  return(*this);
}

Bureaucrat::~Bureaucrat()
{
  std::cout << "Bureaucrat Retired." << std::endl;
}

std::string Bureaucrat::getName() const
{
  return (_name);
}


int Bureaucrat::getGrade()const
{
  return(_grade);
}

void Bureaucrat::gradeDown()
{
  _grade++;
  if (_grade > 150)
    throw Bureaucrat::GradeTooLowException();

}

void Bureaucrat::gradeUp()
{
  _grade--;
  if (_grade < 1)
    throw Bureaucrat::GradeTooHighException();

}

const char* Bureaucrat::GradeTooLowException::what () const throw()
{
  return("Grade Too Low Exception");
}


const char* Bureaucrat::GradeTooHighException::what () const throw()
{
  return("Grade Too High Exception");
}

std::ostream& operator<< (std::ostream& os, const Bureaucrat& br)
{
  os << br.getName()<< ", bureaucrat grade: "<< br.getGrade();
  return (os);
}

void Bureaucrat::signForm(Form& form)
{
  if (this->_grade <= form.getSingGrade() && form.getStatus())
    std::cout << this->_name << " signed " << form.getName() << std::endl;
  else
  {
    std::cout << this->_name << " couldn't sign " << form.getName() << " because: ";
    if (this->_grade > form.getSingGrade())
      std::cout << "Bureaucrat's grade too Low." << std::endl;
    else
      std::cout << "beSigned() function wasn't called first." << std::endl;
  }
}

void Bureaucrat::executeForm(Form const & form)
{
  if (_grade <= form.getExecGrade() && form.getStatus())
    std::cout << this->_name << " executed "<< form.getName();
  else if (!form.getStatus())
    std::cout << " Form is not signed, "<<_name<< " can't execute it" << std::endl;
  else
    std::cout << _name<< "'s grade is too Low, Can't execute this Form" << std::endl;
}
