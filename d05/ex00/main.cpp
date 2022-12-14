/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:54:44 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/13 17:28:40 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
  Bureaucrat halima;
  try 
  {
    /*giving a grade out of range 1-150 keeping in mind that 1 is the highest:*/
    Bureaucrat woman("coffee", 170);
  }
  catch (Bureaucrat::GradeTooLowException& e)
  {
    /*we expected and catched an exception 
     * the what method returns a char const *str that explaines what is the exception*/
    std::cout << e.what() << std::endl;
  }

  std::cout << "*******------------------*********"<< std::endl;

  try 
  {
    Bureaucrat woman("coffee", 11);
  }
  catch (std::exception& e)
  {
    /*nothing is wrong with what inside the try above, so we won't catch
     * anything, and the lines bellow won't get executed ..*/
    std::cout << e.what() << std::endl;
  std::cout << "*******------------------*********"<< std::endl;
  }

  std::cout << halima << std::endl;
}
