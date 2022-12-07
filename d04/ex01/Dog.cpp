/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:13:39 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/06 18:45:10 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog() : Animal()
{
  std::cout << "Class Dog was constructed by inheritance" << std::endl;
  type = "Dog";
  DogBrain = new Brain();
}

Dog::Dog(const Dog& dog) : Animal()
{
  std::cout << "Copy constructor for *Dog* was called." << std::endl;
  this->type = dog.type;
}

Dog& Dog::operator= (const Dog& dog)
{
  std::cout << "copy assignement operator for *Dog*  was called." << std::endl;
  this->type = dog.type;
  return (*this);
}

Dog::~Dog()
{
  std::cout << "Destructor for " + type +" is called" << std::endl;
  delete DogBrain;
}

void Dog::makeSound() const
{
  std::cout << "Bark Barrrrk :v" << std::endl;
}
