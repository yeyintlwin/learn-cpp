// Listing 5.7: Passing const references

#include <iostream>

struct Date
{
  int month, day, year;
} birthdate = {10, 25, 1947};

void displayDate(const Date &rd)
{
  std::cout << "I was born on "
            << rd.month << '/'
            << rd.day << '/'
            << rd.year << std::endl;
}

int main()
{
  const Date &rd = birthdate;
  birthdate.month = 5;
  displayDate(rd);
  return 0;
}
