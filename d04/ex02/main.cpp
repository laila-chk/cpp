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


int main() 
{

 // const Animal* none = new Animal();
  const Animal* kitty = new Cat();
  const Animal* puppy = new Dog();

 // std::cout <<std::endl<<"we didn't specify so: "+ none->getType() << std::endl;
  std::cout <<"puppy is of a type: "+ puppy->getType() << std::endl;
  std::cout <<"kitty is of a type: "+ kitty->getType() << std::endl;


  return 0;
}
