// Listing 5.6: Using const references
#include <iostream>

struct Date
{
  int month, day, year;
} birthdate = {10, 25, 1947};

int main()
{
  const Date &rd = birthdate;
  // rd.month = 5; // Error

  birthdate.month = 5;

  std::cout << "I was born on "
            << rd.month << '/'
            << rd.day << '/'
            << rd.year << std::endl;
  return 0;
}
