// Listing 8.13: More on overloaded relational operators
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
  void dispaly() const
  {
    std::cout << "\n\t" << month << '/' << day
              << '/' << year << std::endl;
  }
  // Overloaded opreators.
  int operator==(Date &dt) const;
  int operator<(Date &) const;
};

// Overloaded equality operator definition
int Date::operator==(Date &x) const
{
  return (this->month == x.month &&
          this->day == x.day &&
          this->year == x.year);
}

// Overloaded less-than operator definition.
int Date::operator<(Date &x) const
{
  if (this->year == x.year)
  {
    if (this->month == x.month)
      return this->day < x.day;
    return this->month < x.month;
  }
  return this->year < x.year;
}

int main()
{
  Date date1(10, 25, 1947),
      date2(11, 10, 2003),
      date3(10, 25, 1947);

  if (date1 < date2)
  {
    date1.dispaly();
    std::cout << "\t is LESS than ";
    date2.dispaly();
  }
  std::cout << std::endl;

  if (date1 == date3)
  {
    date1.dispaly();
    std::cout << "\t is EQUAL to ";
    date3.dispaly();
  }
  return 0;
}
