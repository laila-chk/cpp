/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 11:43:17 by lchokri           #+#    #+#             */
/*   Updated: 2023/03/28 16:17:53 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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

void fill_container(std::vector<int>& vec, std::deque<int>& dq, int ac, char **av)
{
	int tmp;
	size_t i = 1;
	for (int i = 1; i < ac; i++)
	{
		if (!is_num(av[i]))
		{
			std::cout << "Error: bad arguments" << std::endl;
			exit (0);
		}
		tmp = atoi(av[i]);
		vec.push_back(tmp);
		dq.push_back(tmp);
	}
	while (i < vec.size() && vec[i] > vec[i-1])
		i++;
	if (i == vec.size() )
	{
		std::cout << "Numbers are already sorted!" << std::endl;
		exit (0);
	}
}
