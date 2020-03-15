// Listing 3.17: This program converts the temperatures
// in Celsius to Fahrenheit.

#include <iostream>

int main()
{
  signed int cel;
  float fah;

  std::cout << "     CELCIUS       FAHRENHEIT\n";

  for (cel = -40; cel <= 40; cel += 10)
  {
    fah = 1.8 * cel + 32.0;

    // std::cout.setf(ios::fixed); // set cout flag for fixed-point
    std::cout.width(10);    // print width specified
    std::cout.precision(2); // specify two decimal places

    std::cout << cel << '\t';

    // width() manipulator does not stick from one
    // command to the next
    std::cout.width(10);

    std::cout << fah << std::endl;
  }

  return 0;
}
