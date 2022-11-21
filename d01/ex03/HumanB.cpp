/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:21:35 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/21 16:39:26 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
  std::cout << "a humanB called " + name + " was created" << std::endl;
}
HumanB::~HumanB()
{
  std::cout << "humanB " + _name << " died :'(" << std::endl;
}
 
void  HumanB::setWeapon(Weapon& wp)
{
  this->_Weap = &wp;
}

void  HumanB::setWeapon(Weapon *wp)
{
  if (!wp )
    _Weap = NULL;
}

void HumanB::attack(void)
{
  if (_Weap)
   std::cout << _name<< " attacked with their "<< _Weap->getType() << std::endl;
  else
  {
    std::cout << _name<< " have no weapon to attack with :'( do you want "<< _name;
    std::cout <<" to slam the shit out of the enemy using their bare hand?"<< std::endl;
  }
}

