/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 16:44:37 by lchokri           #+#    #+#             */
/*   Updated: 2023/03/27 18:29:46 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

int is_num(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == '+' && i == 0)
			i++;
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac < 3)
	{
		std::cout << "Error: bad arguments!" << std::endl;
		return (1);
	}
	std::vector<int> vec;
	int tmp;
   for (int i = 1; i < ac; i++)
   {
	   if (!is_num(av[i]))
	   {
		   std::cout << "Error: bad arguments" << std::endl; 
		   return (1);
	   }
	   tmp = atoi(av[i]);
	   vec.push_back(tmp);
   }
  for (unsigned long i = 0; i < vec.size(); i++)
	 std::cout << vec[i] << std::endl; 
}
