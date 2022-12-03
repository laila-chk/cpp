/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 19:55:12 by lchokri           #+#    #+#             */
/*   Updated: 2022/12/03 20:11:10 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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
}
