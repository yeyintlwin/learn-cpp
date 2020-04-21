// Listing 7.1: This program converts  the temperatures
// in Celsius to Fahrenheit using array.

#include <iostream>
#include <iomanip>

int main()
{
  signed int cel = -40;
  float fah[9]; // Declare

  std::cout << "     CELSIUS     FAHRENHEIT\n";
  for (int i = 0; i <= 9; i++)
  {
    fah[i] = 1.8 * cel + 32.0;
    std::cout << std::setw(10) << cel << std::setw(14) << fah[i] << std::endl;
    cel += 10;
  }
  return 0;
}
