#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{

  public :
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& Scav);
    ScavTrap& operator= (const ScavTrap& Scav);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};

#endif
