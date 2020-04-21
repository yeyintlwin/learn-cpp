// Listing 4.26: Returning Reference
#include <iostream>

struct Date
{
  int month, day, year;
};

Date birthday[] = {
    {12, 10, 1995},
    {7, 11, 1998},
    {10, 5, 2000},
    {15, 7, 2001},
    {9, 10, 2002},
};

const Date &getDate(int n)
{
  return birthday[n - 1];
};

int main()
{
  int dt = 2003;
  while (dt != 0)
  {
    std::cout << "\nEnter date # (1-5, 0 to Quit): ";
    std::cin >> dt;
    if (dt > 0 && dt < 6)
    {
      const Date &rd = getDate(dt);
      std::cout << rd.month << '/'
                << rd.day << '/'
                << rd.year << std::endl;
    }
  }
  return 0;
}
