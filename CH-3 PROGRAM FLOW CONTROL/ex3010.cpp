// Listing 3.10: This program displays the consecutive
// degit 0, 1, 2, 3, ..., 9 with all digits in one line
// sparated by one space between them.
#include <iostream>

int main()
{
  int digit = 0;

  while (digit <= 9)
  {
    std::cout << digit << " ";
    ++digit;
  }

  std::cout << std::endl;

  return 0;
}
