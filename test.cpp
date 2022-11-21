#include <iostream>

struct a
{
};

int main(void)
{

  const int i& = 19;// l-value == left-value;
  const int j = 19;

  ; // r-value == right value
  "hello";
  a();
  std::cout << i << std::endl;

  return (0);
}
