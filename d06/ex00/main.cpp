#include <iostream>

// char - int - double - float
int charType (std::string input)
{
  unsigned int i = 0;
  while (isalpha(input[i]))
    i++;
  if (i == input.size())
    return (1);
  return (-1);
}

int  getType(std::string input)
{
  unsigned int i = 0;

  if (input[i] == '-' || input[i] == '+')
  {
    if (input.size() == 1)
      return (-1);
    i++;
  }
  while (isdigit(input[i]))
    i++;
  if (i == 0)
    return (charType(input));
  if (input[i] == '\0' )
    return (1);
  if (input[i] == '.')
  {
    i++;
    while (isdigit(input[i]))
      i++;
    if(input[i] == 'f')
      return (3);
    if(input[i] == '\0')
      return (2);
  }
  if(!isdigit(input[i]) && input[i] != '.' && i != 0)
    return  (-1);
  return (-2);
}
int main(int ac, char **av)
{
  if (ac != 2)
  {
    std::cout << "bad number of arguments" << std::endl;
    return (1);
  }
  std::string input = av[1];
  std::cout << "type: "<< getType(input);
}
