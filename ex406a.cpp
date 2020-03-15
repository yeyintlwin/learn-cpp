#include <iostream>

void convert(double *xp)
{
  *xp *= 2.54;
}

int main()
{
  double inches;

  std::cout << "Enter inches: ";
  std::cin >> inches;

  convert(&inches);

  std::cout << "Length = " << inches << " centimeters\n";
  return 0;
}
