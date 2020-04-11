// Listing 7.3: This program shows how to print character
// string that involve various kind of substitutions.

#include <iostream>

int main()
{

  char str1[] = {"BASKET"};
  char str2[] = {'B', 'A', 'L', 'L', '\0'};

  std::cout << "The goal in " << str1 << " "
            << str2 << " is " << std::endl;
  std::cout << "to put the " << str2 << " in the "
            << str1 << std::endl;
  return 0;
}
