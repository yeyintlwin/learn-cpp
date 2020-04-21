// Listing 8.4: Move on overloaded + and ++ operators
#include <iostream>

class Date
{
  int month, day, year;
  static int days[];

public:
  Date(int m = 0, int d = 0, int y = 0)
  {
    month = m;
    day = d;
    year = y;
  }
  void display() const
  {
    std::cout << std::endl
              << month << '/' << day << '/' << year;
  }
  // Overloaded + operator.
  Date operator+(int n) const
  {
    Date x = *this;
    n += x.day;
    while (n > days[x.month - 1])
    {
      n -= days[x.month - 1];
      if (++x.month == 13)
      {
        x.month = 1;
        x.year++;
      }
    }
    x.day = n;
    return x;
  }
  // Overloaded prefix ++ operator.
  Date operator++()
  {
    *this = *this + 1;
    return *this;
  }
  // Overloaded postfix ++ operator.
  Date operator++(int)
  {
    Date x = *this;
    *this = *this + 1;
    return x;
  }
};

int Date::days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // Jan, Feb, Mar, Apr, ..., Dec.

int main()
{
  Date newDate, oldDate(1, 4, 1995);

  newDate = oldDate++;
  oldDate.display();
  ++newDate;
  newDate.display();

  return 0;
}
