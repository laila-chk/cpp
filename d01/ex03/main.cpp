/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:02:45 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/21 16:39:32 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
  Weapon  club = Weapon("father's belt");
  HumanA bob("Bob", club);
  bob.attack();
  club.setType("Rock that was on the ground");
  bob.attack();


  HumanB jim("Jim");
  jim.setWeapon(NULL);
  jim.attack();
  club.setType("mother's sandala");
  jim.setWeapon(club);
  jim.attack();
}
