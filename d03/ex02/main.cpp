/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:55:12 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/04 22:33:16 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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

  FragTrap bella("buena");

 bella.attack("dalw");
  bella.takeDamage(5);
  bella.beRepaired(10);
  bella.takeDamage(60);
  bella.takeDamage(800);
  bella.takeDamage(5);
  bella.beRepaired(10);
  bella.highFivesGuys();
}
