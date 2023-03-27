/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 13:23:34 by lchokri           #+#    #+#             */
/*   Updated: 2023/03/27 13:23:53 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

void parse_arg(int ac, char **av)
{
	int digits = 0;
	int oper = 0;
	if (ac != 2)
	{
		std::cout<< "Error: Wrong arguments!" << std::endl;
		exit(0);
	}
	for (int i = 0; av[1][i]; i++)
	{
		if (!isdigit(av[1][i]) && !isblank(av[1][i]) && av[1][i] != '/' && av[1][i] != '*' && av[1][i] != '-' && av[1][i] != '+')
		{
			std::cout << "Error: program supports numbers and /*-+ only!" << std::endl;
			exit (0);
		}
		if(isdigit(av[1][i]))
			digits++;
		else if (av[1][i] == '/' || av[1][i] == '*' || av[1][i] == '-' || av[1][i] == '+' )
			oper++;
	}
}

