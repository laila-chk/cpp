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
	public:
		std::string FirstName;	
		std::string LastName;	
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string DarkestSecret;
};

class PhoneBook {
	public :
		Contact con[8];
		int	i;
		int	j;
};

# endif
