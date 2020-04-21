#include <iostream>

#define PI 3.141593
#define AREA(r) PI *r *r

int main()
{
  float radius;

  std::cout << "Enter radius: ";
  std::cin >> radius;
  std::cout << "Area = " << AREA(radius) << std::endl;

#undef PI
  float PI = 1;

  std::cout << "\nArea = " << AREA(radius) << std::endl;
  return 0;
}
