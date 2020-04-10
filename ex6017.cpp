// Listing 6.17: Using friends
#include <iostream>
class Date; // A forward reference

class CustomDate
{
  int da, yr;

public:
  CustomDate(int d = 0, int y = 0)
  {
    da = d;
    yr = y;
  }
  void display() const
  {
    std::cout << std::endl
              << yr << '-' << da;
  }
  friend Date;
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
  operator CustomDate();
};

Date::operator CustomDate()
{
  static int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  CustomDate cd(0, yr);
  for (int i = 0; i < mo - 1; i++)
    cd.da += days[i];
  cd.da += da;
  return cd;
}

int main()
{
  Date dt(10, 25, 2003);
  CustomDate cd(dt);
  cd.display();
  std::cout << std::endl;
  return 0;
}
