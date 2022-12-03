/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:52:31 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/03 18:22:22 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name): _name(name)
{
  std::cout << "Constructor is Called, initializing values..." << std::endl;
  HitPts = 10;
  EnergyPts = 10;
  AttackDmg = 10;
}

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap is going out of scope .."<< std::endl;
}

void ClapTrap::attack(const std::string& target)
{
  if (EnergyPts && HitPts)
  {
    std::cout << "ClapTrap"<< _name << "attacked"<< target<< "and caused"<< AttackDmg<< "points of damage" << std::endl;
  }
  else
    std::cout << "beep beep! Low battery." << std::endl;


  std::cout << "this func isnt working yet" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (EnergyPts && HitPts)
  {
    HitPts += amount;
    EnergyPts--;
  }
  else
    std::cout << "beep beep! Low battery." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (EnergyPts && HitPts)
    HitPts -= amount;
  else
    std::cout << "TrapClap is already dead!!" << std::endl;

}
