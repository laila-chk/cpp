
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include<iostream>

class ClapTrap
{
  private:
    std::string _name;
    int HitPts;
    int EnergyPts;
    int AttackDmg;
  public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& CT);
    ClapTrap& operator= (const ClapTrap& Clap);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


#endif
