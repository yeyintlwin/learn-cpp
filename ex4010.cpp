// Listing 4.10: This program show how the strings
// can be defined using array and pionter notations.

#include <iostream>

int main()
{
  char str[] = "Defined as an array";
  char *strp = "Defined as a pointer";

  std::cout << str << std::endl
            << strp << std::endl;

  for (int i = 0; i < 8; i++)
    strp++;
  std::cout << strp << std::endl;

  return 0;
}
