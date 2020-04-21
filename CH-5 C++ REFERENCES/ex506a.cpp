// Listing 5.6a: Using const references
#include <iostream>

struct Date
{
  int month, day, year;
};

int main()
{
  //const
  Date birthdate = {10, 25, 1947};

  Date &rd = birthdate; // Error

  std::cout << "I was born on "
            << rd.month << '/'
            << rd.day << '/'
            << rd.year << std::endl;

  return 0;
}
