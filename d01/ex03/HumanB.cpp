/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:21:35 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/20 13:58:00 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name) {}

void  HumanB::setWeapon(Weapon& wp)
{
  this->_Weap = &wp;
}

void  HumanB::setWeapon(std::string someVal)
{
  if (someVal.compare(NULL))
    _Weap = &Weapon("");
}

void HumanB::attack(void)
{
  std::cout <<"humanB " << _name<< " attacked with their "<< _Weap->getType() << std::endl;
}
