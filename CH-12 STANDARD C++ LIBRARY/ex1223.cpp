// Listing 12.23: Using peek(), putback(), and ignore() functions
#include <iostream>

int main()
{
  char ch;
  std::cout << "Enter a sentense\n";
  while (std::cin.get(ch))
  {
    if (ch == '#')
      std::cin.putback('Z');
    else
      std::cout << ch;
    while (std::cin.peek() == '!')
      std::cin.ignore(1, '!');
  }
  return 0;
}
