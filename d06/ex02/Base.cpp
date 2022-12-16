/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:58:22 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/14 21:58:06 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
  std::cout << "~Base destructor called" << std::endl;
}


Base* generate(void)
{
  switch (time(0) % 3)
  {
    case 0:
      return (new A);
    case 1:
      return (new B);
    case 2:
      return (new C);
  }
  std::cout << "WARNING SMTH WENT VERY WRONG!" << std::endl;
  return NULL;
}

void identify(Base* p)
{
  Base *a = dynamic_cast<A*>(p);
  if (a == NULL)
  {
    a = dynamic_cast<B*>(p);
    if (a == NULL)
      std::cout << "type C" << std::endl;
    else 
      std::cout << "type B" << std::endl;
    return ;
  }
  std::cout << "type A" << std::endl;
}

void identify(Base& p)
{
  try
  {
    Base& k = dynamic_cast<A&>(p);
    std::cout << "Type A." << std::endl;
    (void) (k);
  }
  catch (std::bad_cast& e){}
  try
  {
    Base& k = dynamic_cast<B&>(p);
    std::cout << "Type B." << std::endl;
    (void)(k);

  }
  catch (std::bad_cast& e){}
  try
  {
    Base& k = dynamic_cast<C&>(p);
    std::cout << "Type C." << std::endl;
    (void)(k);
  }
  catch (std::bad_cast& e){}

}

