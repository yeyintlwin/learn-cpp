// Listing 3.18: This program generates a table of multiples
// of a number that you typed in. The program prints multiples
// every 5 numbers and starts next line.

#include <iostream>
#include <iomanip>

int main()
{
  unsigned long num;

  std::cout << "\nEnter a number: ";
  std::cin >> num;

  for (int i = 1; i <= 50; i++)
  {
    std::cout << std::setw(5) << i * num << " ";
    if (i % 5 == 0)
      std::cout << std::endl;
  }

  return 0;
}
