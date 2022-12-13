/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:58:18 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/13 00:59:31 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp" 

Intern::Intern()
{
  std::cout << "Intern class was created" << std::endl;
}

Intern::Intern(const Intern& intern)
{
  (void)intern;
  std::cout << "Copy Constructor was Called" << std::endl;
}

Intern& Intern::operator= (const Intern& intern)
{
  (void)intern;
  std::cout << "Assignement operator was Called" << std::endl;
  return (*this);
}

Intern::~Intern()
{
  std::cout << "~Intern class was destroyed" << std::endl;
}

Form* Intern::makeForm(std::string name, std::string target)
{
  std::string formType[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
  for (int i = 0; i < 3; i++)
  {
    if (!formType[i].compare(name))
    {
      switch (i){
        case 0:
          std::cout << "intern creates " + formType[i]<<std::endl;
          return (new ShrubberyCreationForm(target));
        case 1:
          std::cout << "intern creates " + formType[i]<<std::endl;
          return (new RobotomyRequestForm(target));
        case 2:
          std::cout << "intern creates " + formType[i]<<std::endl;
          return (new PresidentialPardonForm(target));
      }
    }
  }
  throw "Form name doesn't exist!! Null returned!";
  return (NULL);
}

