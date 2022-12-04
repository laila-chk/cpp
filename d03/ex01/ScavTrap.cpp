/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:32:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/03 21:32:58 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) 
{
  std::cout << "ScavTrap " + name + " Created, initializing value.."<< std::endl;

  setHitPts(100);
  setEnergy(50);
  setDmg(20);
}

ScavTrap::~ScavTrap()
{
  std::cout << "destrucor called for ScavTrap"<<std::endl;
}

void ScavTrap::guardGate()
{
  std::cout << "ScavTrap " + getName()+" is now in Gate keeper mode." << std::endl;
}
