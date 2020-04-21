// Listing 12.18: Input member function
#include <iostream>

int main()
{
  char line[25], ch = 0, *lp;
  std::cout << "\n Type a line terminated by 'x'"
            << "\n > ";
  lp = line;

  while (ch != 'x')
  {
    std::cin >> ch;
    *lp++ = ch;
  }
  *lp = '\0';
  std::cout << ' ' << line;
  std::cout << "\n\n Type another one\n > ";
  lp = line;
  ch = 0;
  while (ch != 'x')
  {
    std::cin.get(ch);
    *lp++ = ch;
  }
  *lp = '\0';
  std::cout << line << std::endl;
  return 0;
}
