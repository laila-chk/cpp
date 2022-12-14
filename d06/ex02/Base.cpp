/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 18:58:22 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/14 19:42:31 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
  std::cout << "~Base destructor called" << std::endl;
}


Base* generate(void)
{
  switch (rand() % 3)
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

}
