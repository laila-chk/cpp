/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:22:34 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/06 18:48:41 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
  type = "WrongAnimal";
  std::cout << "Class " +type+ " was constructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
  this->type = animal.type;
  std::cout << "Copy constructor for "+ type+" was called." << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& animal)
{
  this->type = animal.type;
  std::cout << "copy assignement operator for "+ type+" was called." << std::endl;
  return (*this);
}

WrongAnimal::~WrongAnimal()
{
  std::cout << "Destructor for " + type +" is called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "... what animal? what sound?" << std::endl;
}

std::string WrongAnimal::getType() const
{
  return (this->type);
}
