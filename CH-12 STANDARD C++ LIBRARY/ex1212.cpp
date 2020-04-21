// Listing 12.12: The output justification
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
    std::cout << std::setiosflags(std::ios::left)
              << std::setw(12) << ch[i]
              << std::setw(15) << x[i] << std::endl;
  }
  return 0;
}
