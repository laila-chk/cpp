/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:31:36 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/02 12:46:21 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << this->_name << std::endl ;
}

void  Zombie::setName(std::string name)
{
  this->_name = name;
}

Zombie* newZombie(std::string name)
{
  Zombie* zomZom = new Zombie;

  zomZom->setName(name); 
  return (zomZom);
}
