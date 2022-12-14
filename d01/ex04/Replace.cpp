/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 17:12:46 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/25 18:46:16 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

void  ReplaceString(std::string file, std::string s1, std::string s2)
{
 size_t pos = 0;
  std::string buff;

  if (!s1.compare(""))
  {
    std::cout << "Error! S1 can't be empty." << std::endl;
    return ;
  }
  std::ifstream ReadFile(file);
  if (ReadFile.fail())
  {
    std::cout << "Error! file doesn't exist or right permissions aren't granted."<< std::endl;
    return ;
  }
  std::ofstream writeFile(file + ".replace");
  while (std::getline(ReadFile, buff))
  {
      pos = buff.find(s1);
    while(pos != std::string::npos)
    {
      buff.erase(pos,s1.size());
      buff.insert(pos, s2);
      pos = buff.find(s1, pos + s2.length());
    }
    writeFile << buff;
    if (!ReadFile.eof())
      writeFile <<  std::endl;
  }

}
a = 5;
b = 2;
 while (a--)
{
    print_space(a);
    count << "/";
    print_space(b);
    count << "\" << std::endl;
    b += 2;
}
std::cout<<"    /\"

   /  \
  /    \
 /      \
/        \
   |  |
   |  |



    /\      4-0
   /  \     3-2
  /    \    2-4
 /      \   1-6


    /\
   /  \
