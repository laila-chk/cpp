/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:31:03 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/21 16:17:38 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& nm, Weapon& wp): _name(nm), _Weapon(wp)
{
  std::cout << "a HumanA " + _name +" spawned with a " + _Weapon.getType();
  std::cout <<" in their hand." << std::endl;
}

void HumanA::attack(void)
{
  std::cout << _name + " attacks with their " + _Weapon.getType() + "."<< std::endl;

}

HumanA::~HumanA()
{
  std::cout << "humanA destroyed along with its weapon." << std::endl;
}

