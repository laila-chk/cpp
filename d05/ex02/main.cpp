/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:54:44 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/13 17:58:55 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
  Bureaucrat br("ahmad", 1);
  Bureaucrat woman;
  ShrubberyCreationForm fr;
  RobotomyRequestForm Rb("home");
  PresidentialPardonForm pr("pree");
  try 
  {
    std::cout << "trying to execute:" <<std::endl;
//    fr.execute(br);
  }
  catch (std::exception& e)
  {
    std::cout <<  e.what() << std::endl;
  }
  try
  {
    fr.beSigned(br);
    fr.execute(br);
    br.executeForm(fr);
//    fr.beSigned(woman);
//    fr.execute(woman);

  }
  catch (std::exception& e)
  {
    std::cout << "trying to execute:" <<std::endl;
    std::cout <<  e.what() << std::endl;
  }

}
