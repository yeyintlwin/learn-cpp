// Listing 12.10: The setw() manipulator
#include <iostream>
#include <iomanip>

int main()
{
  static double x[] =
      {0.00000012, 1.23, 345.678, 56789012.34};

  static char *ch[] =
      {"ZARNI", "ARKAR", "AYELWIN", "POZAW"};

  std::cout.setf(std::ios::fixed); // std::ios::scientific
  std::cout << std::endl;

  for (int i = 0; i < 4; i++)
    std::cout << std::setw(10) << ch[i]
              << std::setw(20) << x[i] << std::endl;
  return 0;
}
