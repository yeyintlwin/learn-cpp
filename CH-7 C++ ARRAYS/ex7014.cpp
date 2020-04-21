// Listing 7.14: This program changes a line
// of characters to uppercase.

#include <iostream>
#include <cctype>

class Letters
{
  char ch;

public:
  Letters(char c)
  {
    ch = c;
  }

  char get_ch()
  {
    return ch;
  };
};

int main()
{
  Letters obj[10] = {'I', ' ', 'l', 'o', 'v',
                     'e', ' ', 'C', '+', '+'};
  for (int i = 0; i < 10; i++)
    std::cout << obj[i].get_ch();
  std::cout << std::endl;
  return 0;
}
