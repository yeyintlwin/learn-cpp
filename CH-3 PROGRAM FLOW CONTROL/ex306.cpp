// Listing 3.6: This program reads a lowestcase character,
// converts it to uppercase and than writes out
// the uppercase equivalent.

#include <iostream>

int main()
{
  char lower, upper;

  std::cout << "Enter a lower character\n";
  std::cin >> lower;

  if (lower >= 'a' && lower <= 'z')
    upper = 'A' + lower - 'a';
  else
    upper = lower;

  std::cout << "Uppercase equivalent is " << upper << std::endl;

  return 0;
}
