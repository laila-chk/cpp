/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:29:36 by lchokri           #+#    #+#             */
/*   Updated: 2022/10/19 02:08:21 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>


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

		/*---*--- functions to get only 10 chars ---*---*/



};

      /**************   member functions of Contact definition:         **********/
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


void	Contact::setPhoneNumber(std::string PhoneNumeber)
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
		int	_j;

public :

		void	SetI(int i);
		void	GetI(int i);
		void	SetJ(int j);
		void	GetJ(int j);
		void	SetContact(int i);
		void	GetContact(int i);


};

void	PhoneBook::SetI(int i)
{
	_i = i;	
}

void	PhoneBook::SetJ(int j)
{
	_j = j;
}

int	PhoneBook::GetI(int i)
{
	return (i);
}

void	PhoneBook::GetJ(int j)
{
	return (j);
}


void	PhoneBook::SetContact(int i, std::string attr, std::string value)
{
		...

		if (attr.compare("PhoneNumber"))
			con[i].setPhoneNumber(value);
		else if (attr.compare("DarkestSecret"))
			con[i].setDarkestSecret(value);
}

void	PhoneBook::GetContact(int i)
{
	
}

/**************************************
 *		setCont is incomplete		   *
 	*		bla mad7awel d compili	   	 *
		*		work with getline      	   	*
			*		sali lyoma :)      			*
				*		CHANGE THE MAIN				* 
					*		or 3aweda 					 *	 
						***********************************


# endif
