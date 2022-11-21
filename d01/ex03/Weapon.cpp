/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 10:51:58 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/21 13:26:20 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string wp): _type(wp)
{
  std::cout << "weapon was created" << std::endl;
  return ;
}

Weapon::~Weapon()
{
  std::cout << "weapon was destroyed" << std::endl;
  return ;
}
void  Weapon::setType(std::string type)
{
  _type = type;
}
  
std::string Weapon::getType(void)
{
  std::string &typeRef = _type;
    return (typeRef);
}

