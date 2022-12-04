/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:55:12 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/04 18:15:54 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
  ClapTrap trash("trash");

  trash.attack("dalw");
  trash.takeDamage(5);
  trash.beRepaired(10);
  trash.takeDamage(10);
  trash.takeDamage(5);
  trash.takeDamage(5);
  trash.beRepaired(10);

  std::cout << "----------------------------------------------------------"<<std::endl;

  ScavTrap bella("buena");

 bella.attack("dalw");
  bella.takeDamage(5);
  bella.beRepaired(10);
  bella.takeDamage(10);
  bella.takeDamage(50);
  bella.takeDamage(5);
  bella.beRepaired(10);
  bella.guardGate();


}
