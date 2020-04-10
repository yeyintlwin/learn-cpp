// Listing 6.19: Using friend functions
#include <iostream>

class CustomDate; // Forward reference

class Date
{
  int mo, da, yr;

public:
  Date(const CustomDate &); // conversion constructor

  void display() const
  {
    std::cout << std::endl
              << mo << '/' << da << '/' << yr;
  }
};

class CustomDate
{
  int da, yr;

public:
  CustomDate(int d = 0, int y = 0)
  {
    da = d;
    yr = y;
  }
  // Friend conversion function
  friend Date::Date(const CustomDate &);
};

// Conversion constructor (Date <- CustomDate).
Date::Date(const CustomDate &cd)
{
  static int days[] = {31, 28, 31, 30, 31, 30,
                       31, 31, 30, 31, 30, 31};
  yr = cd.yr;
  da = cd.da;

  for (mo = 0; mo < 11; mo++)
  {
    if (da > days[mo])
      da -= days[mo];
    else
      break;
  }
  mo++;
}

int main()
{
  Date dt(CustomDate(298, 2003));
  dt.display();
  std::cout << std::endl;
  return 0;
}
