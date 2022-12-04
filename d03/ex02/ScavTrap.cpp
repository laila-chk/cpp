/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 21:32:55 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/04 17:59:13 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) 
{
  setHitPts(100);
  setEnergy(50);
  setDmg(20);
}

ScavTrap::~ScavTrap(){}

void ScavTrap::guardGate()
{
  std::cout << "ScavTrap " + getName()+" is now in Gate keeper mode." << std::endl;
}
