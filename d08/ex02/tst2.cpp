#include <iostream>
#include <stack>

int main()
{
  std::stack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  mstack.push(3);
  mstack.push(5);
  mstack.push(737); //[...] mstack.push(0);
  std::cout << mstack.top() << std::endl;
}
