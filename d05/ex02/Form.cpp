/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 21:02:11 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/12 19:13:15 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Unspecified"), _signed(false), _execGrade(1), _signGrade(1)
{
  std::cout << "Form Constructor called without specifications, initialasing required grades with : 1 ";
  std::cout << "and name with : Unspecified" << std::endl;
}

Form::Form(std::string name, const int exec, const int sign): _name(name), _signed(false), _execGrade(exec), _signGrade(sign)
{
  std::cout << "Form Constructor called initialasing Values.." << std::endl;
}

Form::Form(const Form& form): _name(form._name), _signed(false), _execGrade(form._execGrade), _signGrade(form._signGrade)
{
  std::cout << "Copy constructor was called, copying values.."<< std::endl;
}

Form& Form::operator= (const Form& form)
{
  this->_signed = form._signed;
  std::cout << "assignement operator was called, Assigning some values.."<< std::endl;
  return (*this);
}

Form::~Form()
{
  std::cout << "~Form Destructor was called"<< std::endl;
}

std::string Form::getName() const
{
  return (this->_name);
}

int Form::getExecGrade() const
{
  return (this->_execGrade);
}

int Form::getSingGrade() const
{
  return (this->_signGrade);
}

bool Form::getStatus() const
{
  return (this->_signed);
}

const char* Form::GradeTooLowException::what () const throw()
{
   return("Grade Too Low Exception");
}

const char* Form::GradeTooHighException::what () const throw()
{
   return("Grade Too High Exception");
}

const char* Form::NotSignedException::what () const throw()
{
   return("Form is Not Signed");
}

void Form::beSigned(Bureaucrat& br)
{
  if (br.getGrade() <= _signGrade)
    _signed = true ;
  else
     throw Form::GradeTooLowException();
}

std::ostream& operator<< (std::ostream& os, const Form& br)
{
  std::string status;
  if (br.getStatus())
    status = "signed";
  else
    status = "not signed";
  os << "*name: " << br.getName()<< std::endl << "*status: "<< status << std::endl<< "*execution Grade: "<< br.getExecGrade()<< std::endl<< "*signing Grade: "<< br.getSingGrade();
    return(os);
}
