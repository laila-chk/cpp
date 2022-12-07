/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:13:39 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/06 18:41:03 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal()
{
  std::cout << "Class WrongCat was constructed by inheritance" << std::endl;
  type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& cat): WrongAnimal ()
{
  std::cout << "Copy constructor for WrongCat was called." << std::endl;
  this->type = cat.type;
}

WrongCat& WrongCat::operator= (const WrongCat& cat)
{
  std::cout << "copy assignement operator for WrongCat was called." << std::endl;
  this->type = cat.type;
  return (*this);
}

WrongCat::~WrongCat()
{
  std::cout << "Destructor for WrongCat is called" << std::endl;
}

void WrongCat::makeSound() const
{
  std::cout << "miaaaaaao miao :3" << std::endl;
}
