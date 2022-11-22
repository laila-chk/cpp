/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 07:55:40 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/19 08:44:59 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
  Zombie* zomZom = new Zombie [N];

  for (int i = 0; i < N; i++)
    zomZom[i].setName(name);
  return (zomZom);
}
