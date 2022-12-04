/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:52:31 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/04 18:15:32 by lchokri          ###   ########.fr       */
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
  std::cout << _name +" is going out of scope .."<< std::endl;
}

void ClapTrap::attack(const std::string& target)
{
  if (EnergyPts && HitPts)
    std::cout << _name << " attacked "<< target<< " and caused "<< AttackDmg<< " points of damage " << std::endl;
  else
    std::cout << "beep beep! Low battery. Can't attack" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (EnergyPts && HitPts)
  {
    std::cout << _name << " repaired itself" << std::endl;
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
    std::cout << _name << " received "<< amount <<" damage points" << std::endl;
    HitPts -= amount;
  }
  else
   std::cout << _name +" is already dead!! Can't Take damage.." << std::endl;

}

int  ClapTrap::getHitPts(void)
{
  return(this->HitPts);
}

int ClapTrap::getEnergy(void)
{
  return (this->EnergyPts);
}

int ClapTrap::getDmg(void)
{
  return(this->AttackDmg);
}

void ClapTrap::setHitPts(int HitPts)
{
  this->HitPts = HitPts;
}

void ClapTrap::setEnergy(int Eng)
{
  this->EnergyPts = Eng;
}

void ClapTrap::setDmg(int dmg)
{
  this->AttackDmg = dmg;
}

void  ClapTrap::setName(std::string name)
{
  this->_name = name;
}

std::string ClapTrap::getName(void)
{
  return(_name);
}

