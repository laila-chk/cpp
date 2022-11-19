#include "Zombie.hpp"

int main()
{
  Zombie* zum = newZombie("alex");
  zum->announce();
  Zombie* z = newZombie("Foooo");
  z->announce();
  randomChump("laila");

  Zombie *bunch = zombieHorde(3, "unknown");
  delete [] bunch;
  delete zum;
  delete z;
}
