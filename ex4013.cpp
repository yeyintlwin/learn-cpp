// Listing 4.13: This program copies one string
// to another using pointers.

#include <iostream>

void copyStr(char *, char *);

int main()
{
  char *strp = "Teach Yourself C++ Complete";
  char str[80];

  copyStr(str, strp);

  std::cout << std::endl
            << str << std::endl;
            
  return 0;
}

void copyStr(char *to, char *from)
{
  while (*from)
    *to++ = *from++;
  *to = '\0';
}