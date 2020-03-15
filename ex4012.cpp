// Listing 4.12: This program shows a string
// used as a function argument. The function
// display the string each character in turn.

#include <iostream>

void displayStr(char *);
int main()
{
  char str1[] = "DISPLAY A STRING\n";
  char str2[] = "WITH POINTER NOTATION\n";

  displayStr(str1);
  displayStr(str2);

  return 0;
}

void displayStr(char *cp)
{
  while (*cp)
    std::cout << *cp++;
}