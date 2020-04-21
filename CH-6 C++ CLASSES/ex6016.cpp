// Listing 6.16: Improved member conversion function
#include <iostream>

class CustomDate
{
  int mo, da, yr, totalDays;

public:
  CustomDate() {}
  CustomDate(int m, int d, int y)
  {
    mo = m;
    da = d;
    yr = y;
  }

  void display() const
  {
    std::cout << std::endl
              << mo << '/' << da << '/' << yr << std::endl
              << "Total days in " << mo << " months equal "
              << totalDays << " days\n";
  }

  void setDay(int d)
  {
    totalDays = d;
  }
};

class Date
{
  int mo, da, yr;

public:
  Date(int m, int d, int y)
  {
    mo = m;
    da = d;
    yr = y;
  }
  operator CustomDate() const; // conversion function
};

// Member conversion function (CustomDate <- Date).
Date::operator CustomDate() const
{
  static int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  CustomDate cd(mo, da, yr);
  int day = da;
  for (int i = 0; i < mo - 1; i++)
    day += days[i];
  cd.setDay(day);
  return cd;
}

int main()
{
  Date dt(10, 25, 2003);
  CustomDate cd;

  // Convert date to CustomDate via assignment.
  cd = dt;
  cd.display();
  return 0;
}
