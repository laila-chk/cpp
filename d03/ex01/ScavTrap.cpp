/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:32:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/04 18:42:34 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) 
{
  std::cout << getName() + " ScavTrap is constructed" << std::endl;
  setHitPts(100);
  setEnergy(50);
  setDmg(20);
}

ScavTrap::~ScavTrap()
{
  std::cout << getName() + " is going out of scope"<< std::endl;
}

void ScavTrap::guardGate()
{
  std::cout << "ScavTrap " + getName()+" is now in Gate keeper mode." << std::endl;
}
