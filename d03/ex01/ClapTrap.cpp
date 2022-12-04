/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:52:31 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/04 19:13:19 by lchokri          ###   ########.fr       */
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
  std::cout << "ClapTrap "+_name +" is going out of scope .."<< std::endl;
}

void ClapTrap::attack(const std::string& target)
{
  if (this->EnergyPts > 0 && this->HitPts > 0)
    std::cout << "ClapTrap "<< _name << " attacked "<< target<< " and caused "<< AttackDmg<< " points of damage " << std::endl;
  else
    std::cout << "beep beep! Low battery. "<< _name << " Can't attack" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
  if (this->EnergyPts > 0 && this->HitPts > 0)
  {
    std::cout << "ClapTrap "<< _name << " repaired itself" << std::endl;
    HitPts += amount;
    EnergyPts--;
  }
  else
    std::cout << "beep beep! Low battery. "<< _name << " Can't repaire " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
  if (this->EnergyPts > 0 && this->HitPts > 0)
  {
    std::cout << "Eneg: "<< this->EnergyPts << " hit: "<< this->HitPts<<std::endl;
    std::cout << "ClapTrap "<< _name << " received "<< amount <<" damage points" << std::endl;
    HitPts -= amount;
  }
  else
   std::cout << "ClapTrap "<< _name <<" is already dead!! Can't Take damage.." << std::endl;

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

