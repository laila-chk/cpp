#include <iostream>
#include "data.hpp"


int main()
{
  struct Data *dt;
  dt->i = 5;
  dt->c = 'L';
  int test = 15;
  dt->p = &test;

  std::cout << dt->i  << dt->c << dt->p << " = " << &test << std::endl;


}
