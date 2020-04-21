// Listing 2.13: This program demonstrates function 
// overloading with defult arguements.

#include <iostream>

void repeart_ch(char = '=', int = 40);

int main()
{
  repeart_ch();
  repeart_ch('*');
  repeart_ch('S', 30);

  return 0;
}

void repeart_ch(char ch, int n)
{
  for (int i = 0; i < n; i++)
    std::cout << ch;
  std::cout << std::endl;
}
