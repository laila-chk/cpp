
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
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int  getHitPts(void);
    int  getEnergy(void);
    int  getDmg(void);
    void setHitPts(int HitPts);
    void setEnergy(int Eng);
    void setDmg(int dmg);

    void setName(std::string name);
    std::string getName(void);
};


#endif
