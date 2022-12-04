/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:32:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/04 20:03:16 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) 
{
  std::cout << _name + " ScavTrap is constructed" << std::endl;
  this->_name = name;
  this->HitPts = 100;
  this->EnergyPts = 50;
  this->AttackDmg = 20;
}

ScavTrap::~ScavTrap()
{
  std::cout << _name + " is going out of scope"<< std::endl;
}

void ScavTrap::guardGate()
{
  std::cout << "ScavTrap " + _name+" is now in Gate keeper mode." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
  if (this->EnergyPts > 0 && this->HitPts > 0)
    std::cout << "ScavTrap"<< _name << " attacked "<< target<< " and caused "<< AttackDmg<< " points of damage " << std::endl;
  else
    std::cout << "beep beep! Low battery." + _name + " unable to attack" << std::endl;
}

