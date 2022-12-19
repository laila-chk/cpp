#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include<array>


template<typename T> 
int easyfind(const T& cont, int i)
{
  typename  T::const_iterator  it;
  it = std::find(cont.begin(), cont.end(), i);
    if(it != cont.end())
      return (it - cont.begin());
    throw (std::exception());
}

#endif
