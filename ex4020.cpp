// Listing 40.20: The new and delete operators
#include <iostream>

struct Date
{
  int month;
  int day;
  int year;
};

int main()
{
  // Allocate memory for a date structure
  Date *birthday = new Date;

  // Assign values to the structure members
  birthday->month = 10;
  birthday->day = 25;
  birthday->year = 1947;

  //Display the date structure
  std::cout << "I was born on "
            << birthday->month << '/'
            << birthday->day << '/'
            << birthday->year
            << std::endl;

  // Return the allocate memory to the heap
  delete birthday;

  return 0;
}
