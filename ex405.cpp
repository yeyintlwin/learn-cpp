// Listing 4.5: Pointers to structures
#include <iostream>

struct employeeRec
{
  int emplNo;
  float hours;
  float wage;
};

void displayRec(const employeeRec *y)
{
  std::cout << "\nEmplNo Hours Wage Pay\n\n";
  while (y->emplNo != -1)
  {
    std::cout << y->emplNo << "\t"
              << y->hours << "\t"
              << y->wage << "\t"
              << (y->hours) * (y->wage) << std::endl;
    y++; //<<<<<<<<<<<<<<<<<<<<
  }
}

int main()
{
  employeeRec x[] = {{1, 65, 30},
                     {2, 50, 50},
                     {3, 40, 75},
                     {-1, 0, 0}};
  displayRec(x);
  return 0;
}
