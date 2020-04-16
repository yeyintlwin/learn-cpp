// Listing 8.3: Using overloaded + operator
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
    std::cout << month << '/' << day << '/' << year << std::endl;
  }

  // Overloaded + operator
  Date operator+(int) const;
};

int Date::days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // Jan, Feb, Mar, Apr, ..., Dec.

// Overloaded + operator definition
Date Date::operator+(int n) const
{
  Date x = *this;
  n += x.day; // n = 21 + 20 = 41

  while (n > days[x.month - 1]) // n = 41 - 31 = 10
  {
    n -= days[x.month - 1];
    if (++x.month == 13)
    {
      x.month = 1; // month = 1
      x.year++;    // year = 1998
    }
  }
  x.day = n;
  return x;
}

int main()
{
  Date oldDate(12, 20, 1997);
  Date newDate;
  int x;
  std::cout << "Enter number of days: ";
  std::cin >> x;

  newDate = oldDate + x; // three weeks hence
  std::cout << "Old Date = ";
  oldDate.display();
  std::cout << "After " << x << " days\n";
  std::cout << "New Date = ";
  newDate.display();
  return 0;
}
