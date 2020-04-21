// Listing 4.11: This program requests a string from
// the user and than displays the string in uppercase letters
#include <iostream>
#include <cctype>

void copyUpper(char *strp)
{
  while (*strp)
    *strp++ = toupper(*strp);
}

int main()
{
  char str[80];

  std::cout << "\nEnter a string\n";
  std::cin.get(str, 80);
  copyUpper(str);
  std::cout << std::endl
            << str << std::endl;
  return 0;
}
