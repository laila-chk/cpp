#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>
#include <string>

template<class T, class cont = std::deque<T>> 
class MutantStack : public std::stack<T, std::deque<T>>
{
  public:
    class iterator :public std::deque<T>::iterator<T>
  {};
};

#endif
