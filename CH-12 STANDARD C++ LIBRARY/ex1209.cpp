// Listing 12.9: Using width() member function
#include <iostream>

// using namespace std;

int main()
{
  static double x[] = {0.00000012, 1.23, 345.678, 56789012.34};
  std::cout.setf(std::ios::fixed, std::ios::scientific);
  for (int i = 0; i < 4; i++)
  {
    std::cout.width(10);
    std::cout << x[i] << std::endl;
  }
  return 0;
}
