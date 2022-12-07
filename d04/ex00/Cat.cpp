/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:13:39 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/06 18:41:03 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat() : Animal()
{
  type = "Cat";
  std::cout << "Class " +type+ " was constructed by inheritance" << std::endl;
}

Cat::Cat(const Cat& cat): Animal ()
{
  this->type = cat.type;
  std::cout << "Copy constructor for "+ type+" was called." << std::endl;
}

Cat& Cat::operator= (const Cat& cat)
{
  this->type = cat.type;
  std::cout << "copy assignement operator for "+ type+" was called." << std::endl;
  return (*this);
}

Cat::~Cat()
{
  std::cout << "Destructor for " + type +" is called" << std::endl;
}

void Cat::makeSound() const
{
  std::cout << "miaaaaaao miao :3" << std::endl;
}
