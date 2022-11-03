/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:29:36 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/03 16:11:32 by lchokri          ###   ########.fr       */
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

class PhoneBook {

  private:
    static int a;
    Contact con[8];
    int	_i;

  public :
    PhoneBook(void);
    ~PhoneBook(void);
    void	IncrementI();
    int   GetIndx(void);
    void	SetContact(std::string attr, std::string value);
    std::string GetContact(std::string attr, int i);
    void	PrintContact(int i);
};

# endif
