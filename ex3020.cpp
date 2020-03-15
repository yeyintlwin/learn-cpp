#include <iostream>

int main()
{
  int x = 1, y, z;

  while (1)
  {
    y = 1;
    do
    {
      z = 25 - x - y;
      float sum = 2.5 * x + 5 * y + 0.25 * z;
      if (sum == 25)
        goto RESULT;
      ++y;
    } while (y <= 5);
    ++x;
  }

RESULT:
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "z = " << z << std::endl;

  return 0;
}