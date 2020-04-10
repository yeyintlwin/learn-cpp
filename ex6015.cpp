// Listing 6.15: Using member conversion function
#include <iostream>

class Date
{
  int month, day, year;

public:
  Date(int m, int d, int y)
  {
    month = m;
    day = d;
    year = y;
  }

  operator long(); // member conversion function
};

// The member conversion functon.
Date::operator long()
{
  static int days[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};
  long x = year - 1900;
  x *= 365;
  x += year / 4;

  for (int i = 0; i < month - 1; i++)
    x += days[i];
  x += day;
  return x;
}

int main()
{
  Date birthday(12, 25, 1997);
  long since = birthday;
  std::cout << "Cummulative days since 1900 = " << since << std::endl;
  return 0;
}
