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
  std::cout << "Class Cat was constructed by inheritance" << std::endl;
  type = "Cat";
  CatBrain = new Brain();
}

Cat::Cat(const Cat& cat): Animal ()
{
  this->type = cat.type;
  std::cout << "Copy constructor for Cat was called." << std::endl;
}

Cat& Cat::operator= (const Cat& cat)
{
  std::cout << "copy assignement operator for Cat was called." << std::endl;
  this->type = cat.type;
  return (*this);
}

Cat::~Cat()
{
  std::cout << "Destructor for " + type +" is called" << std::endl;
  delete CatBrain;
}

void Cat::makeSound() const
{
  std::cout << "miaaaaaao miao :3" << std::endl;
}
