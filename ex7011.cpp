// Listing 7.11: This program displays students vs
// their marks chart.

#include <iostream>
#include <iomanip>

const int STUDENTS = 4;
const int SUBJECTS = 5;

void display(int marks[STUDENTS][SUBJECTS])
{
  std::cout << "           ENG   BUR  PHY  CHEM MATH";
  for (int i = 0; i < STUDENTS; i++)
  {
    std::cout << "\nSTUDENTS" << i + 1;
    for (int j = 0; j < SUBJECTS; j++)
      std::cout << std::setw(5) << marks[i][j];
  }
}

int main()
{
  int marks[STUDENTS][SUBJECTS] = {{100, 75, 85, 70, 85},
                                   {75, 60, 58, 60, 70},
                                   {45, 50, 55, 75, 50},
                                   {20, 40, 35, 48, 45}};
  display(marks);
  std::cout << std::endl;
  return 0;
}
