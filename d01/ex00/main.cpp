#include "Zombie.hpp"

int main()
{

  Zombie* zum = newZombie("alex");
  zum->announce();
  Zombie* z = newZombie("Foooo");
  z->announce();
  randomChump("laila");

  delete zum;
  delete z;
}
