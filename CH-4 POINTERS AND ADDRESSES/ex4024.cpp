// Listing 4.24: Intializing a reference
#include <iostream>

struct Date
{
  int month, day, year;
};

struct EmployeeRec
{
  int emplNo;
  char name[80];
  Date dates[3];
  float salary;
};

EmployeeRec staff[] = {
    {001, "ZarNi", {{30, 3, 86}, {15, 7, 2002}}, 45000},
    {002, "ArKar", {{15, 5, 78}, {10, 9, 2002}}, 38000},
    {003, "PoCho", {{20, 3, 58}, {10, 5, 2001}}, 35000},
    {0}};

int main()
{
  EmployeeRec *xp = staff;
  while (xp->emplNo != 0)
  {
    std::cout << xp->name << "\t  ";
    for (int i = 0; i < 2; i++)
    {
      Date &rd = xp->dates[i];
      std::cout << rd.month << '/'
                << rd.day << '/'
                << rd.year << "  ";
    }
    std::cout << std::endl;
    xp++;
  }

  return 0;
}
