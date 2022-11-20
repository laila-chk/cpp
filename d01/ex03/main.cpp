/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:02:45 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/20 13:52:42 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
/*  Weapon  club = Weapon("crude spiked club");
  HumanA bob("Bob", club);
  bob.attack();
  club.setType("some other type of club");
  bob.attack();

  */

 Weapon club = Weapon("crude spiked club");
  HumanB jim("Jim");
  jim.setWeapon();
  jim.attack();
  club.setType("rocket launcher");
  jim.attack();
}
