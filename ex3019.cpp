// Listing 3.19: This program determines the three
// unknown x, y, and z, which are defined by two equations:
// x + y + z = 25
// 2.5x + 5y + 0.25z = 25
// where x, y, and z are integers.

//Nested Loop
#include <iostream>

int main()
{
  int x, y, z;

  for (x = 1; x <= 10; ++x)
  {
    for (y = 1; y <= 5; ++y)
    {
      z = 25 - x - y;
      float sum = 2.5 * x + 5 * y + 0.25 * z;
      if (sum == 25)
        goto RESULT;
    }
  }

RESULT:
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "z = " << z << std::endl;

  return 0;
}
