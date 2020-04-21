// Listing 4.28: const references parameters
#include <iostream>

struct Date
{
  int month, day, year;
} dt = {10, 5, 2002};

void displayDate(const Date &);

int main()
{
  const Date &dr = dt;

  displayDate(dr);

  return 0;
}

void displayDate(const Date &x)
{
  std::cout << x.month << '/'
            << x.day << '/'
            << x.year << std::endl;
}