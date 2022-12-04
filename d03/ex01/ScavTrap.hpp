#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{

  public :
    void attack(const std::string& target);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& Scav);
    ScavTrap& operator= (const ScavTrap& Scav);
    ~ScavTrap();
    void guardGate();
};

#endif
