// Listing 3.15: This program illustrates the use of for statement.
#include <iostream>
#include <cmath>

int main()
{
  int i;
  double num, x = 2.5;

  std::cout << "num\tpowered by\tcounter i\n\n";

  for (i = 1; i <= 5; i++)
  {
    num = x * i;
    std::cout << num << '\t' << pow(num, i) << "\t\t"
              << i << '\n';
  }

  return 0;
}
