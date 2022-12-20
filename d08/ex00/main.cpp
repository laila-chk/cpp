/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 15:17:47 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/20 01:25:27 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main()
{
  std::vector<int> vec;
  std::array<int, 5>arr = {1, 3, 5, 7, 9};

  for (int i = 0; i <= 8; i+=2)
    vec.push_back(i);

  try 
  {
     std::cout << easyfind(arr, 7) << std::endl;
     std::cout << easyfind(vec, 1) << std::endl;
     
  }
  catch (std::exception& e)
  {
    std::cout << "not found!!" << std::endl;
  };
}
