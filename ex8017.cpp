// Listing 8.17: Overloaded pointer-to-member -> operator
#include <iostream>

class Date
{
  int month, day, year;

public:
  Date(int m = 0, int d = 0, int y = 0)
  {
    month = m;
    day = d;
    year = y;
  }
  void display()
  {
    std::cout << std::endl
              << month << '/' << day << '/' << year;
  }
};

class DatePtr
{
  Date *dp;

public:
  DatePtr(Date *d = 0)
  {
    dp = d;
  }
  Date *operator->()
  {
    static Date nulldate(0, 0, 0);
    if (dp == 0)
      return &nulldate;
    return dp;
  }
};

int main()
{
  // Date pointer with nothing in it.
  DatePtr dp;

  // Use it to call display function.
  dp->display();

  Date dt(3, 15, 2003);

  // Put address of date in pointer.
  dp = &dt;

  // Display date through the pointer.
  dp->display();
  std::cout << std::endl;
  return 0;
}
