#include "MutantStack.hpp" 


int main()
{
  MutantStack<int> mstack;
  mstack.push(22);
  mstack.push(17);
//  mstack.pop();
  mstack.push(3); 
  mstack.push(5);
  mstack.push(737); //[...] mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
    std::cout << *it << std::endl;
    std::cout << mstack.top() << std::endl;
 //  MutantStack<int>::iterator ite = mstack.end();
// ++it;
 // --it;
 //  while (it != ite)
 //  {
 //    std::cout << *it << std::endl;
 //    ++it;
 //  }
 // // std::stack<int> s(mstack); return 0;
 //
}
