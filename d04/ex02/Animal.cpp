/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:22:34 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/06 18:48:41 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
  type = "Animal";
  std::cout << "Class " +type+ " was constructed" << std::endl;
}

Animal::Animal(const Animal& animal)
{
  this->type = animal.type;
  std::cout << "Copy constructor for "+ type+" was called." << std::endl;
}

Animal& Animal::operator= (const Animal& animal)
{
  this->type = animal.type;
  std::cout << "copy assignement operator for "+ type+" was called." << std::endl;
  return (*this);
}

Animal::~Animal()
{
  std::cout << "Destructor for *" + type +"* is called" << std::endl;
}

std::string Animal::getType() const
{
  return (this->type);
}
