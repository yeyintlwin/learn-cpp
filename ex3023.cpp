// Listing 3.23: This program determines the three 
// unknowns two equations.

#include <iostream>

int main()
{
  int x, y, z;
  float sum;

  for (x = 1; x <= 10; ++x)
  {
    for (y = 1; y <= 5; ++y)
    {
      z = 25 - x - y;
      sum = 2.5 * x + 5 * y + 0.25 * z;
      if (sum == 25)
        break;
    }
    if (sum == 25)
      break;
  }

  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "z = " << z << std::endl;

  return 0;
}
