// Listing 8.9: Overloading + with a nonmember function
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
  void dispaly() const
  {
    std::cout << month << '/' << day << '/' << year;
  }

  // Overloaded + operator.
  Date operator+(int) const;
};

int Date::days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Overloaded + operator: Date + int.
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

Date operator+(int n, Date &x)
{
  return x + n;
}

int main()
{
  Date oldDate(12, 20, 1997);
  std::cout << "Old Date = ";
  oldDate.dispaly();
  std::cout << std::endl;

  Date newDate = 15 + oldDate + 13; // for weeks hence
  std::cout << "\nAfter four weeks\n"
            << "New Date = ";
  newDate.dispaly();
  std::cout << std::endl;
  return 0;
}
