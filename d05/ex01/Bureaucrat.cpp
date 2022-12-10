/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 09:51:03 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/10 22:05:22 by lchokri          ###   ########.fr       */
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
    throw Bureaucrat::GradeTooHighException();
  if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
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

void Bureaucrat::signForm(Form& Form)
{
  if form.
}
