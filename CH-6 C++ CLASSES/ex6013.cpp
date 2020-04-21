// Listing 6.13: Using copy constructor
#include <iostream>
#include <cstring>

class Date
{
  int mo, da, yr;
  char *month;

public:
  Date(int m = 0, int d = 0, int y = 0) // constructor definition
  {
    static char *mos[] = {
        "January", "Febuary", "March",
        "April", "May", "June", "July",
        "August", "September", "October",
        "November", "December"};

    mo = m;
    da = d;
    yr = y;

    std::cout << "\nlog: m - " << m << ", mo - " << mo << std::endl;
    if (m != 0)
    {
      month = new char[strlen(mos[m - 1]) + 1];
      strcpy(month, mos[m - 1]);
    }
    else
      month = 0;
  }

  Date(const Date &dt) // Copy constructor definition
  {
    mo = dt.mo;
    da = dt.da;
    yr = dt.yr;

    if (dt.month != 0)
    {
      month = new char[strlen(dt.month) + 1];
      strcpy(month, dt.month);
    }
    else
      month = 0;
  }

  ~Date() // The destructor defination
  {
    delete[] month;
  }

  void display() const
  {
    if (month != 0)
      std::cout << month << ' ' << da << ", " << yr << std::endl;
  }
};

int main()
{
  Date birthday(10, 25, 1947);
  birthday.display();

  Date newday = birthday;
  newday.display();

  Date lastday(birthday);
  lastday.display();

  return 0;
}
