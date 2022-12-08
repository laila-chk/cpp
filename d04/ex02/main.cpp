/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:19:29 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/08 12:25:18 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main() 
{
//     const Animal* none = new Animal();
     const Animal* kitty = new Cat();
     const Animal* puppy = new Dog();

     std::cout <<"puppy is of a type: "+ puppy->getType() << std::endl;
     std::cout <<"kitty is of a type: "+ kitty->getType() << std::endl;


     std::cout << "kitty sound: ";
     kitty->makeSound();
     std::cout << "puppy sound: ";
     puppy->makeSound();

     std::cout << "*********************************************************"<<std::endl;
     std::cout << std::endl;
     std::cout << "~EXAMPLE OF WRONG ANIMALS~"<<std::endl;

     delete puppy;
     delete kitty;


  Animal* bzaf[10];
  for (int i = 0; i < 10; i+=2)
    bzaf[i] = new Cat();

  for (int i = 1; i < 10; i+=2)
    bzaf[i] = new Dog();
  std::cout << "n3mlo rasna derna chi haja bihom.." << std::endl;

  for (int i = 1; i < 10; i++)
    delete  bzaf[i] ;

  std::cout << "*********************************************************"<<std::endl;
  return 0;
}
