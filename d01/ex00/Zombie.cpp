/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:31:36 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/24 14:07:01 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

/*       Constructor:       */
Zombie::Zombie(std::string name) : _name(name)
{
  std::cout << "a Zombie was made." << std::endl ;
}

Zombie::~Zombie()
{
  std::cout << "Zombie \"" << this->_name << "\" died :'(" << std::endl ;
}


void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..."<< std::endl ;
}

Zombie* newZombie(std::string name)
{
  Zombie* zomZom = new Zombie(name);

  return (zomZom);
}

void randomChump( std::string name )
{
  Zombie Chump(name);
  Chump.announce();
}
