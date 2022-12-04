/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 21:28:51 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/04 22:45:11 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) 
{
  std::cout << "FragTrap " + _name + " is constructed" << std::endl;
  this->_name = name;
  this->HitPts = 100;
  this->EnergyPts = 100;
  this->AttackDmg = 30;
}

FragTrap::FragTrap(const FragTrap& Frg): ClapTrap() 
{
  this->_name = Frg._name;
  this->HitPts = Frg.HitPts;
  this->EnergyPts = Frg.EnergyPts;
  this->AttackDmg = Frg.AttackDmg;
}

FragTrap& FragTrap::operator= (const FragTrap& Frg)
{
  std::cout << "Assignment operator called " << std::endl;
  this->_name = Frg._name;
  this->HitPts = Frg.HitPts;
  this->EnergyPts = Frg.EnergyPts;
  this->AttackDmg = Frg.AttackDmg;

  return (*this);
}

FragTrap::~FragTrap()
{
  std::cout <<"FragTrap " + _name + " is going out of scope"<< std::endl;
}

void FragTrap::highFivesGuys(void)
{
  std::cout << "gimme a High Five!! :D" << std::endl;
}
