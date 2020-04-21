// Listing 12.15: A table of square roots and squares
#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
  double x;
  std::cout << "\n\t   X      sqrt(X)         X*X\n\n";
  for (int x = 0; x < 10; x++)
  {
    std::cout << std::resetiosflags(std::ios::left)
              << std::setw(12) << std::setprecision(1)
              << x
              << std::setiosflags(std::ios::fixed)
              << std::setw(12) << std::setprecision(4)
              << sqrt(x)
              << std::setiosflags(std::ios::fixed)
              << std::setw(12) << std::setprecision(1)
              << x * x << std::endl;
  }
  return 0;
}