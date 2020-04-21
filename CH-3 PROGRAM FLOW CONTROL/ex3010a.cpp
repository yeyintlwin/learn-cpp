#include <iostream>

int main()
{
  int digit = 0;

  while (digit <= 9)
    std::cout << ++digit << " ";

  std::cout << std::endl;

  return 0;
}
