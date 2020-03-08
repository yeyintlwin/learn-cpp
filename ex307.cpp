//Temperature Conversion
#include <iostream>

int main()
{
  int flag;
  double tempr;

  std::cout << "\nType 1 to convert Fahrenheit to Celsius: "
            << "\nType 2 to convert Celsius to Fahrenheit: "
            << std::endl;
  std::cin >> flag;

  if (flag == 1)
  {
    std::cout << "Enter temperature in deg Fahrenheit: ";
    std::cin >> tempr;
    std::cout << "Celsius = " << (tempr - 32) / 1.8 << std::endl;
  }
  else
  {
    std::cout << "Enter temperature in deg Celcius: ";
    std::cin >> tempr;
    std::cout << "Fahrenheit = " << 1.8 * tempr + 32 << std::endl;
  }
  return 0;
}
