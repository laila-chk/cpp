/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:43:54 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/21 09:50:05 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main (int ac, char** av)
{
  if (ac != 4)
  {
    std::cout << "Error! wrong amount of arguments" << std::endl;
    std::cout << "Usage: ./SearchAndReplace filename sting1 string2"<< std::endl;
    return 0;
  }
  size_t indx = 0;
  std::string buff;
  std::string s1 = av[2];
  buff.append(av[1]);
  std::string oFile = buff + ".replace";
  std::ifstream ReadFile(av[1]);

  std::ofstream writeFile(oFile);
  
  while (std::getline(ReadFile, buff))
  {
      indx = buff.find(s1);
      std::cout << indx << "~~" << std::endl;
    while(indx != std::string::npos)
    { 
      std::cout << indx << "___" << std::endl;
      buff.erase(indx,s1.size());
      buff.insert(indx, av[3]);
      indx = buff.find(s1, indx + 1);
    }
    writeFile << buff <<  std::endl;
  }
}
