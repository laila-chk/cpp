/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:43:54 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/25 17:18:19 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp" 

int main (int ac, char** av)
{
  if (ac != 4)
  {
    std::cout << "Error! wrong amount of arguments" << std::endl;
    std::cout << "Usage: ./SearchAndReplace filename sting1 string2"<< std::endl;
    return 1;
  }

   ReplaceString(av[1], av[2], av[3]);
}
