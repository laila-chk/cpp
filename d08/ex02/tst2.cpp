#include <iostream>
#include <stack>
#include <deque>

int main()
{
  std::deque<int> mstack;
  mstack.push_back(22);
  mstack.push_back(17);
//  mstack.pop_back();
  mstack.push_back(3);
  mstack.push_back(5);
  mstack.push_back(737); 


  std::deque<int>::iterator it = mstack.begin();
  std::deque<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite)
  {
    std::cout << *it << std::endl;
    ++it;
  }
}
