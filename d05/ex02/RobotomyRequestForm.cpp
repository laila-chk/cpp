/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:21:29 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/12 18:19:01 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <fstream>

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 45, 72), _target("noTarget") 
{
  std::cout << "RobotomyRequestForm constructor was called with no parameters" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 45, 72), _target(target) 
{
  
  std::cout << "RobotomyRequestForm constructor called " << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& shr) : Form(shr), _target(shr._target)
{
  std::cout << "Copy constructor for RobotomyRequestForm called " << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& shr)
{
  _target = shr._target;
  std::cout << "Copy constructor for RobotomyRequestForm called " << std::endl;
  return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() 
{
  std::cout << "~RobotomyRequestForm destructor called " << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
  if (this->getStatus() && executor.getGrade() <= this->getExecGrade())
    std::cout << "dooo smth"<<std::endl;
     else
    throw Form::GradeTooLowException();
}
