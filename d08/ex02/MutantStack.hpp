#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>
#include <string>
#include <iterator>
#include <vector>





template<class T, class cont = std::deque<T> > 
class MutantStack : public std::stack<T, cont >
{
  public:
    typedef typename MutantStack<T>::container_type::iterator iterator;
    typedef typename MutantStack<T>::container_type::const_iterator const_iterator;
    iterator  end()
    {
      return this->c.end(); 
    }

    iterator  begin()
    {
      return this->c.begin(); 
    }

    const_iterator  cend()
    {
      return this->c.cend(); 
    }

    const_iterator  cbegin()
    {
      return this->c.cbegin(); 
    }
};

#endif
