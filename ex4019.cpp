//Listing 4.19: A const pointer to char
#include <iostream>
#include <cctype>

void showUpper(char *const str)
{
  int i = 0;

  while (*(str + i))
  {
    *(str + i) = toupper(*(str + i));
    i++;
  }
}

int main()
{
  char s[] = "Hello C++ Complete";
  std::cout << s << std::endl;
  showUpper(s);
  std::cout << s << std::endl;
  return 0;
}
