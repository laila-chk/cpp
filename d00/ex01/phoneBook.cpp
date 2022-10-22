/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:01:24 by lchokri           #+#    #+#             */
/*   Updated: 2022/10/22 18:42:19 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

int get_command(void)
{
  std::string command;

  std::cout << "please enter one of these three commands: ADD, SEARCH or EXIT" << std::endl;
  std::getline(std::cin, command);
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

int numirec_inp(std::string str)
{
  for (size_t i = 0; i < str.size(); i++)
  {
    if (std::isalpha(str[i]))
      return 0;
  }
  return 1;
}

void	search(PhoneBook* pb)
{
  std::string inpt;
  std::stringstream conv;
  int j = 0;
  int i;

  std::cout << std::setw(10) << "index" << " | ";
  std::cout << std::setw(10) << "first name" << " | ";
  std::cout << std::setw(10) << "Last Name" << " | "; 
  std::cout << std::setw(10) << "Nickname" << " | " << std::endl;
  while (j < pb->GetIndx() && j < 8)
  {
    std::cout << std::setw(10) << j << " | "; 
    std::cout << std::setw(10) << limited(pb->GetContact("FirstName", j)) << " | ";
    std::cout << std::setw(10) << limited(pb->GetContact("LastName", j)) << " | ";
    std::cout << std::setw(10) << limited(pb->GetContact("Nickname", j)) << " | " << std::endl;
    j++;
  }
  std::cout <<  " please enter the index of the contact you want to view" << std::endl;
  std::getline(std::cin, inpt);
  if (!numirec_inp(inpt))
    std::cout << "Error!! Numeric value is required" << std::endl;
  else
  {
    conv << inpt;
    conv >> i;
    if (i > j - 1 || i < 0)
    {
      if (j == 0)
        std::cout << "no contacts to display" << std::endl;
      else
        std::cout << "Error! index should be between 0 and " << j - 1 << std::endl;
    }
    else
      pb->PrintContact(i);
  }
  return;
}

void	manipulate(PhoneBook* pb, int val)
{
  int j;
  std::string inpt;

  j = pb->GetIndx() % 8;
  if (val == 0)
    std::cout << "command not found!" << std::endl;
  else if (val == 1)
  {
    std::cout << "enter firstName:" << std::endl;
    getline(std::cin, inpt);
    pb->SetContact("FirstName", inpt);

    std::cout << "enter LastName:" << std::endl;
    getline(std::cin, inpt);
    pb->SetContact("LastName", inpt);

    std::cout << "enter Nickname:" << std::endl;
    getline(std::cin, inpt);
    pb->SetContact("Nickname", inpt);

    std::cout << "enter phone number:" << std::endl;
    getline(std::cin, inpt);
    pb->SetContact("PhoneNumber", inpt);

    std::cout << "enter Darkest secret of this person:" << std::endl;
    getline(std::cin, inpt);
    pb->SetContact("DarkestSecret", inpt);
    pb->IncrementI();
  }	
  else if (val == 2)
    search(pb);
}

int main()
{
  PhoneBook	pb;
  int			val;

  while (!std::cin.eof())
  {
    val = get_command();
    if (val == 3)
      break;
    else
    {		manipulate(&pb, val);
      std::cout <<"_______________" << pb.GetContact("FirstName", 0) << std::endl;
    }
  }
  std::cout << "Exiting ..." << std::endl;
}
