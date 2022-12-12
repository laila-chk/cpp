/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:54:44 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/12 18:53:46 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat br("ahmad", 1);
  ShrubberyCreationForm fr;
  //  RobotomyRequestForm Rb("home");
//  PresidentialPardonForm pr("pree");
  try 
  {
    fr.execute(br);
  }
  catch (std::exception& e)
  {
    std::cout << "000000" << e.what() << std::endl;
  }
  fr.beSigned(br);
    fr.execute(br);
}
