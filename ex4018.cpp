// Listing 4.18: const pointer arguements
#include <iostream>
#include <cctype>

char *copyUpper(char *s1, const char *s2)
{
  char *s = s1;
  while ((*s1++ = (toupper(*s2++))) != '\0')
    ;
  return s;
}

int main()
{
  char str1[80];
  const char str2[] = "Be the first to know C++";
  std::cout << "\nBEFORE...\n"
            << str2 << std::endl;
  copyUpper(str1, str2);
  std::cout << "\nAFTER...\n"
            << str1 << std::endl;
  return 0;
}
