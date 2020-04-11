// Listing 7.8: This program keeps count of all while spaces,
// non-white spaces and the frequencies of digits 1 through 9.

#include <iostream>
#include <conio.h>

const int ESC = 27;
const int N = 10;

int main()
{
  int i, wh_spcs = 0, ch;
  int nonwh_spcs = 0;
  int digit[N];

  for (i = 0; i < N; i++)
    digit[N] = 0;

  std::cout << "Enter a line of characters\n";
  while ((ch = getche()) != ESC)
  {
    if (ch >= '0' && ch <= '9')
      digit[ch - '0']++;
    else if (ch == ' ')
      wh_spcs++;
    else
      nonwh_spcs++;
  }
  std::cout << std::endl
            << std::endl;
  for (i = 0; i < N; i++)
    std::cout << "digit[" << i << "] = " << digit[i] << std::endl;
  std::cout << "\nWhite spaces = " << wh_spcs
            << "\nNon-white spaces = " << nonwh_spcs << std::endl;
  return 0;
}
