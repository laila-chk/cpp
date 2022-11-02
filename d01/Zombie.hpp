# ifndef  ZOMBIE_H
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
  private:
    std::string _name;

  public:
    void  announce(void);
    void  setName(std::string name);
};

Zombie* newZombie(std::string name);

#endif
