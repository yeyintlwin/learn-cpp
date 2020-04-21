// Listing 6.14: Using conversion constructors
#include <iostream>
#include <ctime>
#include <stdio.h>

class Date
{
  int month, day, year;

public:
  Date(time_t now) // conversion constructor function
  {
    tm *tim = localtime(&now);
    day = tim->tm_mday;
    month = tim->tm_mon + 1;
    year = tim->tm_year;
    if (year >= 100)
      year -= 100;
  }

  void display()
  {
    char yr[5];
    if (year < 10)
      sprintf(yr, "0%d", year);
    else
      sprintf(yr, "%d", year);
    std::cout << month << '/' << day << '/' << yr << std::endl;
  }
};

int main()
{
  time_t now = time(0); // get today's date and time
  std::cout << asctime(gmtime(&now)) << std::endl;
  //  std::cout << asctime(localtime(&now)) << std::endl;

  Date dt(now);
  dt.display();
  std::cout << std::endl;
  return 0;
}
