/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:27:06 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/03 16:04:02 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char** av)
{
  std::string input;

  if (ac == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  else 
  {
    for(int i = 1; i < ac; i++)
      input += av[i];
   for (size_t i = 0; i < input.size(); i++)
      std::cout << (unsigned char)std::toupper(input[i]);
    std::cout << std::endl;
  }
}
