#include <iostream>
#include <iomanip>

int main()
{
  signed int cel;
  float fah;

  std::cout << "     CELCIUS      FAHRENHEIT\n";

  for (cel = -40; cel <= 40; cel += 5)
  {
    fah = 1.8 * cel + 32.0;
    std::cout << std::setw(10) << cel << std::setw(14) << fah << std::endl;
  }

  return 0;
}
