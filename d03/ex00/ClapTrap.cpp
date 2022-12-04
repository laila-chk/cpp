/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:52:31 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/04 22:41:37 by lchokri          ###   ########.fr       */
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

ClapTrap::ClapTrap(const ClapTrap& Clp)
{
  this->_name = Clp._name;
  this->HitPts = Clp.HitPts;
  this->EnergyPts = Clp.EnergyPts;
  this->AttackDmg = Clp.AttackDmg;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& Clp)
{
  std::cout << "Assignment operator called " << std::endl;
  this->_name = Clp._name;
  this->HitPts = Clp.HitPts;
  this->EnergyPts = Clp.EnergyPts;
  this->AttackDmg = Clp.AttackDmg;
  return (*this);
}

ClapTrap::~ClapTrap()
{
  std::cout << "ClapTrap "+_name +" is going out of scope .."<< std::endl;
}

void ClapTrap::attack(const std::string& target)
{
  if (EnergyPts && HitPts)
    std::cout << "ClapTrap "<< _name << " attacked "<< target<< " and caused "<< AttackDmg<< " points of damage " << std::endl;
  else
    std::cout << "beep beep! Low battery. Can't attack" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (EnergyPts && HitPts)
  {
    std::cout << "ClapTrap "<< _name << " repaired itself" << std::endl;
    HitPts += amount;
    EnergyPts--;
  }
  else
    std::cout << "beep beep! Low battery. Can't repaire " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (EnergyPts && HitPts)
  {
    std::cout << "ClapTrap "<< _name << " received "<< amount <<" damage points" << std::endl;
    HitPts -= amount;
  }
  else
   std::cout << "ClapTrap is already dead!! Can't Take damage.." << std::endl;

}
