/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:01:24 by lchokri           #+#    #+#             */
/*   Updated: 2022/10/19 02:05:51 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int get_command(PhoneBook *pb)
{
	std::string command;

	std::cout << "please enter one of these three commands: ADD, SEARCH or EXIT" << std::endl;
	if (pb->j == 0)
	{
		pb->j++;
		std::cout << "ADD: to save a new contact." << std::endl;
		std::cout << "SEARCH: to display a specific contact." << std::endl;
		std::cout << "EXIT: to exit" << std::endl;
	}
	std::cin >> command;
	if (command.compare("ADD") == 0)
		return (1);
	else if (command.compare("SEARCH") == 0)
		return (2);
	else if (command.compare("EXIT") == 0)
		return (3);
	else
		return (0);
}

std::string limited(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(9);
		str += '.';
	}
	return (str);
}

void	search(PhoneBook pb)
{
	int i;
	int j = 0;

	std::cout << std::setw(10) << "index" << " | ";
	std::cout << std::setw(10) << "first name" << " | ";
	std::cout << std::setw(10) << "Last Name" << " | "; 
	std::cout << std::setw(10) << "Nickname" << " | " << std::endl;
	while (j < pb.i % 8)
	{
		std::cout << std::setw(10) << j << " | "; 
		std::cout << std::setw(10) << limited(pb.con[j].FirstName) << " | ";
		std::cout << std::setw(10) << limited(pb.con[j].LastName) << " | ";
		std::cout << std::setw(10) << limited(pb.con[j].Nickname) << " | " << std::endl;
		j++;
	}
	std::cout << "enter the index of the contact you want to view" << std::endl;
	std::cin >> i;
	if (i > j - 1 || i < 0)
	{
		if (j == 0)
			std::cout << "no contacts to display" << std::endl;
		else
			std::cout << "Error! index should be between 0 and " << j - 1 << std::endl;
	}
	else
	{
		std::cout << pb.con[i].FirstName << std::endl;
		std::cout << pb.con[i].LastName << std::endl;
		std::cout << pb.con[i].Nickname << std::endl;
		std::cout << pb.con[i].PhoneNumber << std::endl;
		std::cout << pb.con[i].DarkestSecret << std::endl;
	}
}

void	manipulate(PhoneBook* pb, int i)
{
	int j;

	j = pb->i % 8;
	if (i == 0)
		std::cout << "command not found!" << std::endl;
	else if (i == 1)
	{
		std::cout << "enter firstName" << std::endl;
		std::cin >> pb->con[j].FirstName;
		std::cout << "enter LastName" << std::endl;
		std::cin >> pb->con[j].LastName;
		std::cout << "enter Nickname" << std::endl;
		std::cin >> pb->con[j].Nickname;
		std::cout << "enter phone number" << std::endl;
		std::cin >> pb->con[j].PhoneNumber;
		std::cout << "enter Darkest secret of this person" << std::endl;
		std::cin >> pb->con[j].DarkestSecret;
		pb->i++;
	}	
	else if (i == 2)
		search(*pb);
}

int main()
{
	PhoneBook	pb;
	int			val;

	pb.i = 0;
	pb.j = 0;
	while (!std::cin.eof())
	{
		val = get_command(&pb);
		if (val == 3)
			break;
		else
			manipulate(&pb, val);
	}
}
