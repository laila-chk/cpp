/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:33:00 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/12 18:18:13 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 5, 25), _target("noTarget") 
{
  std::cout << "PresidentialPardonForm constructor was called with no parameters" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 5, 25), _target(target) 
{
  
  std::cout << "PresidentialPardonForm constructor called " << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& shr) : Form(shr), _target(shr._target)
{
  std::cout << "Copy constructor for PresidentialPardonForm called " << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& shr)
{
  _target = shr._target;
  std::cout << "Copy constructor for PresidentialPardonForm called " << std::endl;
  return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() 
{
  std::cout << "~PresidentialPardonForm destructor called " << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
  if (this->getStatus() && executor.getGrade() <= this->getExecGrade())
    std::cout << "dooo smth"<<std::endl;
     else
    throw Form::GradeTooLowException();
}
