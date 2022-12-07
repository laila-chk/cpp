/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:19:29 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/06 18:45:45 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main() 
{
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  const WrongAnimal* ii = new WrongCat();

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  std::cout << "cat:  ";
  i->makeSound();

  std::cout << "Wrong cat:  ";
  ii->makeSound(); 

  std::cout << "doggo:  ";
  j->makeSound();

  std::cout << "undefined animal :  ";
  meta->makeSound();

   return 0;
}
