// Listing 5.11: Compile-time conditionals
#include <iostream>

#define PI 3.141593
#define AREA(r) PI *r *r
#define DEBUG 0
#define CHECK

int main()
{
  float radius;

#if DEBUG
  std::cout << "Enter radius: ";
  std::cin >> radius;
  std::cout << "Area = " << AREA(radius) << std::endl;

#elif !(defined CHECK)
#undef PI
  float PI = 1;
  std::cout << "\nArea = " << AREA(radius) << std::endl;
#else
  std::cout << "No calculation.\nNo checking.\n";
#endif

  return 0;
}
