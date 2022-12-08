/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:13:39 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/08 10:49:41 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : Animal()
{
  type = "Dog";
  std::cout << "Class " +type+ " was constructed by inheritance" << std::endl;
}

Dog::Dog(const Dog& dog) : Animal()
{
  this->type = dog.type;
  std::cout << "Copy constructor for "+ type+" was called." << std::endl;
}

Dog& Dog::operator= (const Dog& dog)
{
  this->type = dog.type;
  std::cout << "copy assignement operator for "+ type+" was called." << std::endl;
  return (*this);
}

Dog::~Dog()
{
  std::cout << "Destructor for " + type +" is called" << std::endl;
}

void Dog::makeSound() const
{
  std::cout << "Bark Barrrrk :v" << std::endl;
}
