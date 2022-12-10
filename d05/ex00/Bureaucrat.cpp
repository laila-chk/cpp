/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 09:51:03 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/10 18:16:04 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Hamid")
{
  std::cout << "default constructor for Bureaucrat was called, name and grade ";
  std::cout << "weren't passed, initialising them with 'Hamid' and 150"<<std::endl;
  _grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
  if (grade > 0 && grade <= 150)
    _grade = grade;
  else if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  else if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& br)
{
  this->_grade = br._grade;
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

std::string Bureaucrat::getName()
{
  return (_name);
}


int Bureaucrat::getGrade()
{
  return(_grade);
}

void Bureaucrat::gradeDown(int grades)
{
  _grade+= grades;
}

void Bureaucrat::gradeUp(int grades)
{
  _grade-= grades;
}

const char* Bureaucrat::GradeTooLowException::what () const throw()
{
   return("Grade Too Low Exception");
}


const char* Bureaucrat::GradeTooHighException::what () const throw()
{
   return("Grade Too High Exception");
}


