#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template<typename T> 
int easyfind(const T& cont, int i)
{
  int j = 0;

  while (cont[j])
  {
    if (cont[j] == i)
      return j;
  }
  throw std::exception();
}

#endif
