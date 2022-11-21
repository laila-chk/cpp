/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:02:45 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/21 13:28:20 by lchokri          ###   ########.fr       */
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
  jim.setWeapon(NULL);
  jim.attack();
  std::cout << "fff"<< std::endl;
  club.setType("pooop");
  jim.setWeapon(club);
  jim.attack();
}
