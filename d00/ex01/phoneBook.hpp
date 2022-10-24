/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:29:36 by lchokri           #+#    #+#             */
/*   Updated: 2022/10/22 16:48:06 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <cctype>


class Contact {

  private:

    std::string _FirstName;	
    std::string _LastName;	
    std::string	_Nickname;
    std::string	_PhoneNumber;
    std::string _DarkestSecret;

  public:

    /*---*--- functions to access attributes ---*---*/
    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickname(void);
    std::string getPhoneNumber(void);
    std::string getDarkestSecret(void);

    /*---*--- functions to set attributes values ---*---*/
    void	setFirstName(std::string FirstName);
    void	setLastName(std::string FirstName);
    void	setNickname(std::string FirstName);
    void	setPhoneNumber(std::string FirstName);
    void	setDarkestSecret(std::string FirstName);

};
/**************   member functions of Contact definition:         **********/
std::string Contact::getFirstName()
{
  return(_FirstName);
}

std::string Contact::getLastName()
{
  return(_LastName);
}

std::string Contact::getNickname()
{
  return(_Nickname);
}

std::string Contact::getPhoneNumber()
{
  return(_PhoneNumber );
}

std::string Contact::getDarkestSecret()
{
  return(_DarkestSecret);
}



void	Contact::setFirstName(std::string FirstName)
{
  _FirstName = FirstName;
}

void	Contact::setLastName(std::string LastName)
{
  _LastName = LastName;
}

void	Contact::setNickname(std::string Nickname)
{
  _Nickname= Nickname;
}

void	Contact::setPhoneNumber(std::string PhoneNumber)
{
  _PhoneNumber = PhoneNumber;
}

void	Contact::setDarkestSecret(std::string DarkestSecret)
{
  _DarkestSecret = DarkestSecret;
}

class PhoneBook {

  private:
    Contact con[8];
    int	_i;

  public :
    PhoneBook(void);
    ~PhoneBook(void);
    void	IncrementI();
    int   GetI(void);
    int   GetIndx(void);
    void	SetContact(std::string attr, std::string value);
    std::string GetContact(std::string attr, int i);
    void	PrintContact(int i);
};

PhoneBook::PhoneBook(void)
{             
  _i = 0;
  std::cout << " =====================================================" << std::endl;
  std::cout << "||Welcome to our crappy awesome phonebook from the 80s.||" << std::endl;
  std::cout << "||This   PhoneBook   is  able to store up to 8 contacts||" << std::endl;
  std::cout << "||But  if  you  tried  to  add  more  than  8  contacts||" << std::endl;
  std::cout << "||oldest  contact  will  be  replaced by the newest one||" << std::endl;
  std::cout << " =====================================================" << std::endl<< std::endl;


  std::cout << "~~~~~THIS IS  HOW TO USE THIS MAGICAL TOOL~~~~~" << std::endl;
  std::cout << "ADD: to save a new contact." << std::endl;
  std::cout << "SEARCH: to display a specific contact." << std::endl;
  std::cout << "EXIT: to exit" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
  std::cout << "Exiting ..." << std::endl;
  return ;
}


void	PhoneBook::IncrementI()
{
  _i++;	
}

int PhoneBook::GetI(void)
{
  return (_i % 8);
}


int PhoneBook::GetIndx(void)
{
  return (_i);
}



void	PhoneBook::SetContact(std::string attr, std::string value)
{

  if (attr.compare("FirstName") == 0)
    con[GetI()].setFirstName(value);
  else if (attr.compare("LastName") == 0)
    con[GetI()].setLastName(value);
  else if (attr.compare("Nickname") == 0)
    con[GetI()].setNickname(value);
  else	if (attr.compare("PhoneNumber") == 0)
    con[GetI()].setPhoneNumber(value);
  else if (attr.compare("DarkestSecret") == 0)
    con[GetI()].setDarkestSecret(value);
}

void	PhoneBook::PrintContact(int i)
{
  std::cout << con[i].getFirstName() << std::endl;
  std::cout << con[i].getLastName() << std::endl;
  std::cout << con[i].getNickname() << std::endl;
  std::cout << con[i].getPhoneNumber() << std::endl;
  std::cout << con[i].getDarkestSecret() <<std::endl;
}

std::string PhoneBook::GetContact(std::string attr, int i)
{
   if (!attr.compare("FirstName"))
    return(con[i].getFirstName());
  else if (!attr.compare("LastName"))
    return(con[i].getLastName());
  else if (!attr.compare("Nickname"))
    return(con[i].getNickname());
  else	if (!attr.compare("PhoneNumber"))
    return(con[i].getPhoneNumber());
  else if (!attr.compare("DarkestSecret"))
    return(con[i].getDarkestSecret()); 
  return (NULL);
}

# endif
