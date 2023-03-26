
#include <iostream>
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
  parse_arg(ac, av);
}
