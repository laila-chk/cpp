/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:29:40 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/14 17:29:43 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "getType.hpp"

// char - int - double - float
int main(int ac, char **av)
{
  if (ac != 2)
  {
    std::cout << "bad number of arguments" << std::endl;
    return (1);
  }
  std::string input = av[1];

  const char *str = input.c_str();

  float toFlt= atof(str);
  if (toFlt > 32 && toFlt <127)
    std::cout << "char: "<< static_cast<char>(toFlt)<< std::endl;
  else
    std::cout << "char: Non displayable"<<std::endl;
  std::cout<< "int: "<< static_cast<int>(toFlt)<< std::endl;
  if (getType(input) > 1)
  {
    std::cout<< "float: "<< toFlt <<"f"<< std::endl;
    std::cout<< "double: "<< toFlt  << std::endl;
  }
  else
  {
    std::cout<< "float: "<< toFlt <<".0f"<< std::endl;
    std::cout<< "double: "<< toFlt <<".0" << std::endl;
  }
}
