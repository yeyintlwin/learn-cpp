// Listing 8.10: Overloading the assigment += operators
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
    std::cout << month << '/' << day << '/' << year;
  }
  // Overloaded + operator.
  Date operator+(int) const;

  // Overloaded += operator.
  Date operator+=(int n)
  {
    *this = *this + n;
    return *this;
  }
};

int Date::days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Overloaded + operator definition.
Date Date::operator+(int n) const
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

int main()
{
  Date oldDate(1, 4, 1995);
  std::cout << "Old Date = ";
  oldDate.display();
  std::cout << std::endl;

  oldDate += 365;
  std::cout << "\nAfter 365 days\n"
            << "New Date = ";
  oldDate.display();
  std::cout << std::endl;
  return 0;
}
