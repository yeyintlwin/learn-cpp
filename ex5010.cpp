// Listing 5.10: Compile-time conditionals
#include <iostream>

#define PI 3.141593
#define AREA(r) PI *r *r
#define DEBUG 1
#define CHECK

int main()
{
  float radius;

#if DEBUG
  std::cout << "Enter radius: ";
  std::cin >> radius;
  std::cout << "Area = " << AREA(radius) << std::endl;
#endif

#if defined CHECK
#undef PI
  float PI = 1;
  std::cout << "\nArea = " << AREA(radius) << std::endl;
#endif

  return 0;
}
