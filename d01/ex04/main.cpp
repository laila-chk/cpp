/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:43:54 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/22 13:59:36 by lchokri          ###   ########.fr       */
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
    return 1;
  }
  size_t indx = 0;
  std::string buff(av[1]);
  std::string s1 = av[2];
  std::string s2 = av[3];

  if (!s1.compare(""))
  {
    std::cout << "Error! S1 can't be empty." << std::endl;
    return 1;
  }
  std::ifstream ReadFile(av[1]);
  if (ReadFile.fail())
  {
    std::cout << "Error! file doesn't exist or right permissions aren't granted."<< std::endl;
    return 1;
  }
  std::string oFile = buff + ".replace";
  std::ofstream writeFile(oFile);
  while (std::getline(ReadFile, buff))
  {
      indx = buff.find(s1);
    while(indx != std::string::npos)
    { 
      buff.erase(indx,s1.size());
      buff.insert(indx, av[3]);
      indx = buff.find(s1, indx + s2.length());
      std::cout << indx << std::endl;
    }
    writeFile << buff <<  std::endl;
  }
}
