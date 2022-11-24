/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchokri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:31:36 by lchokri           #+#    #+#             */
/*   Updated: 2022/11/24 13:59:35 by lchokri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

/*       Constructor:       */
Zombie::Zombie()
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

void  Zombie::setName(std::string name)
{
  this->_name = name;
}

Zombie* newZombie(std::string name)
{
  Zombie* zomZom = new Zombie;

  zomZom->setName(name); 
  return (zomZom);
}

void randomChump( std::string name )
{
  Zombie Chump;

  Chump.setName(name);
  Chump.announce();
}
