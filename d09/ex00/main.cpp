/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 13:01:31 by lchokri           #+#    #+#             */
/*   Updated: 2023/03/29 13:52:47 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	std::map<int, float> data;
	if (ac !=  2)
	{
		std::cout << "Error: couldn't open file " << std::endl;
		return 1;
	}
	ft_parse_data (data);
	if (!data.size()) { 
		std::cout << "Error: data file is empty!" << std::endl;
		return 1;
		}
	ft_parse_file(av[1], data);
} 

