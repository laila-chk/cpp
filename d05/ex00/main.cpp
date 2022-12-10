/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:54:44 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/10 18:30:32 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat man;
  try {
  
  Bureaucrat woman("coffee", 170);
  }
  catch (Bureaucrat::GradeTooLowException& e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << "*******------------------*********"<< std::endl;


 try {
  
  Bureaucrat woman("coffee", 0);
  }
  catch (std::exception& e)
  {
    std::cout << e.what() << std::endl;
  }

}
