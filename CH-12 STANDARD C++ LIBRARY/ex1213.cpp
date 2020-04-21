// Listing 12.13: The setprecision manipulator
#include <iostream>
#include <iomanip>

int main()
{

  static double x[] =
      {0.00000012, 1.23, 345.678, 56789012.34};

  static char *ch[] =
      {"ZARNI", "ARKAR", "AYELWIN", "POZAW"};

  std::cout << std::endl;

  for (int i = 0; i < 4; i++)
  {
    std::cout << std::setiosflags(std::ios::left) << std::setw(10)
              << ch[i]
              << std::setiosflags(std::ios::right)
              << std::setw(10) << std::setprecision(2)
              << x[i] << std::endl;
  }
  return 0;
}