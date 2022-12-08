/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:13:39 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/08 12:55:46 by lchokri          ###   ########.fr       */
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
  this->CatBrain = new Brain();
  for (int i = 0; i < 100; i++)
    this->CatBrain->setIdeas(i, cat.CatBrain->getIdeas(i));
  std::cout << "Copy constructor for Cat was called." << std::endl;
}

Cat& Cat::operator= (const Cat& cat)
{
  this->type = cat.type;
  this->CatBrain = new Brain();

  for (int i = 0; i < 100; i++)
    this->CatBrain->setIdeas(i, cat.CatBrain->getIdeas(i));

  std::cout << "copy assignement operator for Cat was called." << std::endl;
  return (*this);
}

Cat::~Cat()
{
  std::cout << "Destructor for " + type +" is called" << std::endl;
  delete this->CatBrain;
}

void Cat::makeSound() const
{
  std::cout << "miaaaaaao miao :3" << std::endl;
}
