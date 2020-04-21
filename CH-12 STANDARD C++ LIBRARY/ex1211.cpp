// Listing 12.11: The fill() function
#include <iostream>

int main()
{
  static double x[] = {0.00000012, 1.23, 345.678, 56789012.34};
  std::cout << std::endl;
  for (int i = 0; i < 4; i++)
  {
    std::cout.width(10);
    std::cout.fill('*');
    std::cout << x[i] << std::endl;
  }
  return 0;
}
