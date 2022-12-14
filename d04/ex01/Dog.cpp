/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:13:39 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/08 12:21:51 by lchokri          ###   ########.fr       */
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
  this->DogBrain = new Brain();
  for (int i = 0; i < 100; i++)
    this->DogBrain->setIdeas(i, dog.DogBrain->getIdeas(i));
  std::cout << "Copy constructor for *Dog* was called." << std::endl;
}

Dog& Dog::operator= (const Dog& dog)
{
  this->DogBrain = new Brain();
  for (int i = 0; i < 100; i++)
    this->DogBrain->setIdeas(i, dog.DogBrain->getIdeas(i));
  std::cout << "copy assignement operator for *Dog*  was called." << std::endl;
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
