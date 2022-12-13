/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:30:13 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/12 19:14:17 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 137, 145), _target("noTarget") 
{
  std::cout << "ShrubberyCreationForm constructor was called with no parameters" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 137, 145), _target(target) 
{

  std::cout << "ShrubberyCreationForm constructor called " << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& shr) : Form(shr), _target(shr._target)
{
  std::cout << "Copy constructor for ShrubberyCreationForm called " << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& shr)
{
  _target = shr._target;
  std::cout << "Copy constructor for ShrubberyCreationForm called " << std::endl;
  return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() 
{
  std::cout << "~ShrubberyCreationForm destructor called " << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
  if (this->getStatus() && executor.getGrade() <= this->getExecGrade())
  {
    std::ofstream myFile(_target + "_shrubbery");
    std::string spaces = " ";
    int i = 10;
    int j = 0;
    while (i--)
    {
      for (int k = i; k >= 0; k--)
      {
        myFile << spaces;
      }
      myFile << "/";
      for (int k = j; k > 0; k--)
      {
        myFile << spaces;
      }
      myFile << "\\" << std::endl;
      j += 2;
    }
       myFile << "        ~|  |~" << std::endl;
       myFile << "         |  |" << std::endl;
  }
  else if (!this->getStatus())
    throw Form::NotSignedException();
  else
    throw Form::GradeTooLowException();
}
