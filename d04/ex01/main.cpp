/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:19:29 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/08 12:20:46 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

/*
void  func()
{
  Cat c = Cat();
  {
    Cat c2;
    c2 = c;
    c2 = c;
  }
}
*/
int main() 
{
/*
  const Animal* none = new Animal();
  const Animal* kitty = new Cat();
  const Animal* puppy = new Dog();

  std::cout <<std::endl<<"we didn't specify so: "+ none->getType() << std::endl;
  std::cout <<"puppy is of a type: "+ puppy->getType() << std::endl;
  std::cout <<"kitty is of a type: "+ kitty->getType() << std::endl;


  std::cout << "kitty sound: ";
  kitty->makeSound();
  std::cout << "puppy sound: ";
  puppy->makeSound();
  std::cout << "none sound: ";
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

  delete noAnimal;
  delete noCat;
  delete none;
  delete puppy;
  delete kitty;


*/


//   Animal* bzaf[10];
// for (int i = 0; i < 10; i+=2)
//   bzaf[i] = new Cat();

// for (int i = 1; i < 10; i+=2)
//   bzaf[i] = new Dog();
// std::cout << "n3mlo rasna derna chi haja bihom.." << std::endl;

// for (int i = 1; i < 10; i++)
// delete  bzaf[i] ;

//   std::cout << "*********************************************************"<<std::endl;
  

  Animal *cat = new Cat();
  Animal *a = new Animal();
  Animal *b = new Cat();

  std::cout << cat->getType() << std::endl;
  *cat = *a;
  std::cout << b->getType() << std::endl;
  *a = *b;
  std::cout << a->getType() << std::endl;

//  func();
 // system("leaks smartPet");
  return 0;
}
