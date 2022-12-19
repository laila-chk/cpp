#include <list> 
#include <iostream>


int main()
{
  std::list<int> mstack;
  mstack.push_front(5);
  mstack.push_front(17);
  //mstack.pop_front();
  mstack.push_front(3);
  mstack.push_front(5);
  mstack.push_front(737); //[...] mstack.push_front(0);
  std::list<int>::iterator it = mstack.begin();
    std::cout << *it << std::endl;
    std::cout << mstack.front() << std::endl;
  //std::list<int>::iterator ite = mstack.end();
  // ++it;
  // --it;
  // while (it != ite)
  // {
  //   std::cout << *it << std::endl;
  //   ++it;
  // }
  //std::stack<int> s(mstack);
  return 0;
}
