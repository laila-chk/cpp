/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:06:57 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/19 09:34:28 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

int main()
{
  std::string string = "HI THIS IS BRAIN";
  std::string* stringPTR = &string;
  std::string& stringREF = string;

  std::cout << "The memory address of the string var is: ";
  std::cout << &string << std::endl;

  std::cout << "The memory address held by stringPTR is: ";
  std::cout << stringPTR << std::endl;

  std::cout << "The memory address held by stringREF is: ";
  std::cout << &stringREF << std::endl;


  std::cout << "The value of the string variable  is: ";
  std::cout << string << std::endl;

  std::cout << "The value pointed to by stringPTR is: ";
  std::cout << *stringPTR << std::endl;

  std::cout << "The value pointed to by stringREF is: ";
  std::cout << stringREF << std::endl;
}
