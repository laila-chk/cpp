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
#include "Dog.hpp"

int main() 
{
  const Animal* none = new Animal();
  const Animal* puppy = new Dog();
  const Animal* kitty = new Cat();

  std::cout <<"we didn't specify so: "+ none->getType() << std::endl;
  std::cout <<"puppy is of a type: "+ puppy->getType() << std::endl;
  std::cout <<"kitty is of a type: "+ kitty->getType() << std::endl;

  std::cout << "kitty says:  ";
  kitty->makeSound();


  std::cout << "puppy says:  ";
  puppy->makeSound();

  std::cout << "undefined animal :  ";
  none->makeSound();

  std::cout << "*********************************************************"<<std::endl;
  std::cout << std::endl;

  std::cout << "~EXAMPLE OF WRONG ANIMALS~"<<std::endl;
  const WrongAnimal* noAnimal = new WrongAnimal();
  const WrongAnimal* noCat= new WrongCat();

  std::cout << "a wrong animal sounds like:  ";
  noAnimal->makeSound(); 

  std::cout << "a wrong Cat sounds like:  ";
  noCat->makeSound(); 
   return 0;
}
