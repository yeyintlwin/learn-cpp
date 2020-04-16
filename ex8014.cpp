//  Listing 8.14: Overloading == operator

#include <iostream>
#include <cstring>

const int MAX = 80;
bool TRUE = 1, FALSE = 0;

class myString
{
  char str[MAX];

public:
  myString()
  {
    strcpy(str, "");
  }
  myString(char s[])
  {
    strcpy(str, s);
  }
  void getStr()
  {
    std::cout << '\t';
    std::cin.get(str, MAX);
  }
  bool operator==(myString ms)
  {
    return strcmp(str, ms.str) ? FALSE : TRUE; // String compare
  }
};

int main()
{
  myString s1("yes");
  myString s2;

  std::cout << "\n\tEnter 'yes' or 'no'" << std::endl;
  s2.getStr();
  if (s2 == s1)
    std::cout << "\tYou typed yes.\n";
  else
    std::cout << "\tYou typed no.\n";
  return 0;
}
