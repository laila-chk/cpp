/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:32:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/04 22:44:37 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) 
{
  std::cout << "ScavTrap " + _name + " is constructed" << std::endl;
  this->_name = name;
  this->HitPts = 100;
  this->EnergyPts = 50;
  this->AttackDmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap& Frg): ClapTrap()
{
  this->_name = Frg._name;
  this->HitPts = Frg.HitPts;
  this->EnergyPts = Frg.EnergyPts;
  this->AttackDmg = Frg.AttackDmg;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& Frg)
{
  std::cout << "Assignment operator called " << std::endl;
  this->_name = Frg._name;
  this->HitPts = Frg.HitPts;
  this->EnergyPts = Frg.EnergyPts;
  this->AttackDmg = Frg.AttackDmg;

  return (*this);
}

ScavTrap::~ScavTrap()
{
  std::cout <<"ScavTrap " + _name + " is going out of scope"<< std::endl;
}

void ScavTrap::guardGate()
{
  std::cout << "ScavTrap " + _name+" is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
  if (this->EnergyPts > 0 && this->HitPts > 0)
    std::cout << "ScavTrap "<< _name << " attacked "+ target + ". " <<  AttackDmg<< " points of damage was done ." << std::endl;
  else
    std::cout << "beep beep! Low battery." + _name + " unable to attack" << std::endl;
}

