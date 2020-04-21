// Listing 3.11: This program evaluatesthe value 
// of PI using the series
// PI/4 = 1 - 1/3 + 1/5 - 1/7 + 1/9 - ...

#include <iostream>

int main()
{
  double n, i = 1, pi = 0;

  std::cout << "Enter n: ";
  std::cin >> n;

  while (i <= n)
  {
    pi += 1 / i - 1 / (i + 2);
    i += 4;
  }

  std::cout.precision(10);
  std::cout << "PI = " << 4 * pi << std::endl;

  return 0;
}
