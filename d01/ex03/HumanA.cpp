/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:31:03 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/19 13:14:34 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& nm, Weapon& wp): _name(nm), _Weapon(wp)
{
  return ;
}

void HumanA::attack(void)
{
  std::cout << _name << " attacks with their ";
  std::cout << _Weapon.getType() << std::endl;

}

HumanA::~HumanA()
{
  std::cout << "huuman destroyed along with its weapon" << std::endl;
}

