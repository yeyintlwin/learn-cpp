// Listing 4.6: This program shows how arguements 
// are passed by reference

#include <iostream>

void convert(double &);

int main()
{
  double inches;

  std::cout << "Enter inches: ";
  std::cin >> inches;

  convert(inches);

  std::cout << "Length = " << inches << " centimeters\n";
  return 0;
}

void convert(double &x)
{
  x *= 2.54;
}
