#include <iostream>
#include "data.hpp" 


uintptr_t serialize(Data* ptr)
{
  return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
  return reinterpret_cast<Data*>(raw);
}

int main()
{
  Data *dt;
  dt->i = 5;
  dt->c = 'L';
 // int test = 15;
 // dt->p = &test;

  std::cout << dt->i  << dt->c << std::endl;
  uintptr_t tmp = serialize(dt);
  Data *dt2 = deserialize(tmp);
  std::cout << dt2->i  << dt2->c << std::endl;
}

