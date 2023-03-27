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
    std::cout << "Error: problem can't be solved, bad format." << std::endl;
    exit (0);
  }
}

int main(int ac, char **av)
{
  int tmp = 0;
  std::stack<int> my_stack;
  parse_arg(ac, av);
  for (int i = 0; av[1][i]; i++)
  {
    if(isdigit(av[1][i]))
      my_stack.push(av[1][i] - '0');
    else if (av[1][i] == '/' || av[1][i] == '*' || av[1][i] == '-' || av[1][i] == '+' )
    {
      tmp = my_stack.top();
      my_stack.pop();
      if (av[1][i] == '/')
      tmp = my_stack.top() / tmp ;
      if (av[1][i] == '*')
      tmp = my_stack.top() * tmp ;
      if (av[1][i] == '-')
      tmp = my_stack.top() - tmp ;
      if (av[1][i] == '+')
      tmp = my_stack.top() + tmp ;
      my_stack.pop();
      my_stack.push(tmp);
    }
  }
  if (my_stack.size() != 1)
    std::cout << "Error: invalid expression!" << std::endl;
  else
    std::cout << my_stack.top() << std::endl;
}
