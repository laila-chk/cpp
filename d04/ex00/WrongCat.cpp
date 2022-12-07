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
  type = "WrongCat";
  std::cout << "Class " +type+ " was constructed by inheritance" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cat): WrongAnimal ()
{
  this->type = cat.type;
  std::cout << "Copy constructor for "+ type+" was called." << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat& cat)
{
  this->type = cat.type;
  std::cout << "copy assignement operator for "+ type+" was called." << std::endl;
  return (*this);
}

WrongCat::~WrongCat()
{
  std::cout << "Destructor for " + type +" is called" << std::endl;
}

void WrongCat::makeSound() const
{
  std::cout << "miaaaaaao miao :3" << std::endl;
}
