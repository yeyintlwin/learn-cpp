#include <iostream>
#include <conio.h> //It only working on Windows.

int main()
{
  int chcount = 0, wdcount = 1;
  char ch = 'a';

  std::cout << "Enter a sentence\n";
  while (ch != '\r')
  {
    ch = getche();
    if (ch == ' ')
      wdcount++;
    else
      chcount++;
  }

  std::cout << "\nWorlds = " << wdcount << std::endl;
  std::cout << "Letters = " << (chcount - 1) << std::endl;

  return 0;
}
