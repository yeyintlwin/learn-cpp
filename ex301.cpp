// Listing 3.1: This program illustrate the use of if statement.
#include <iostream>

int main()
{
  short int num;

  std::cout << "Enter a number\n";
  std::cin >> num;

  if (num < 0)
    std::cout << "The number is -ive.\n";

  if (num > 0)
    std::cout << "The number is +ive.\n";

  if (num == 0)
    std::cout << "The number is zero.\n";

  return 0;
}
