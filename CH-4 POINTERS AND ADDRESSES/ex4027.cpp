// Listing 4.27: const references
#include <iostream>

struct Date
{
  int month, day, year;
} dt = {10, 5, 2002};

int main()
{
  const Date &dr = dt;
  std::cout << dr.month << '/'
            << dr.day << '/'
            << dr.year << std::endl;
  return 0;
}
