#include <iostream>
#include <string>

int main(int ac, char** av)
{
  std::string input;
  if (ac == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  else 
  {
    for(int i = 1; i < ac; i++)
    {
      input += av[i];
      if (i < ac - 1)
        input += " ";
    }
    for (size_t i = 0; i < input.size(); i++)
      std::cout << (unsigned char)std::toupper(input[i]);
    std::cout << std::endl;
  }
}
