/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone_2.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:58:30 by lchokri           #+#    #+#             */
/*   Updated: 2022/10/13 12:51:27 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>


int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
		for (int j = 1; j < ac; j++)
		{
			for (size_t i = 0; i < strlen(av[j]); i++)
				std::cout << (char)std::toupper(av[j][i]);
			std::cout << " ";
		}
    }
	std::cout << "\n";
	return (0);
}
