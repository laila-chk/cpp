#include <iostream>
#include <stack>
#include <cctype>
#include <cstdlib> 

void parse_arg(int ac, char **av)
{
  int digits = 0;
  int oper = 0;
  if (ac != 2)
  {
    std::cout<< "Error: Wrong arguments!" << std::endl;
    exit(0);
  }
  for (int i = 0; av[1][i]; i++)
  {
    if (!isdigit(av[1][i]) && !isblank(av[1][i]) && av[1][i] != '/' && av[1][i] != '*' && av[1][i] != '-' && av[1][i] != '+')
    {
      std::cout << "Error: program supports numbers and /*-+ only!" << std::endl;
      exit (0);
    }
    if(isdigit(av[1][i])) 
      digits++;
    else if (av[1][i] == '/' || av[1][i] == '*' || av[1][i] == '-' || av[1][i] == '+' )
      oper++;
  }
  if (digits - oper != 1) {
    std::cout << "Error: problem can't be solved, wrong format." << std::endl;
    exit (0);
  }
}

int main(int ac, char **av)
{
  std::stack<int> my_stack;
  parse_arg(ac, av);
  for (int i = 0; av[1][i]; i++)
  {
    if(isdigit(av[1][i]))
      my_stack.push(av[1][i] - '0');
  for (std::stack<int>::iterator it = my_stack.begin(); it != my_stack.end(); it++)
    std::cout << *it << std::endl;
  }
   while (!my_stack.empty())
  {
     std::cout << ' ' << my_stack.top();
     my_stack.pop();
  }
}
