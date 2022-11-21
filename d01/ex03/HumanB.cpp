/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:21:35 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/21 13:27:57 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {}
HumanB::~HumanB(){}
 
void  HumanB::setWeapon(Weapon& wp)
{
  if ((wp.getType()).compare("") )
  this->_Weap = &wp;
}

void  HumanB::setWeapon(Weapon *wp)
{
  if (!wp )
    std::cout << " ops!\n";
}

void HumanB::attack(void)
{
  if (!_Weap)
   std::cout << _name<< " attacked with their "<< _Weap->getType() << std::endl;
  else
   std::cout << _name<< " have no weapon to attack with :'(, do you want them to slam the shit out of the enemy?"<< std::endl;
}
