// Listing 7.9: This program displays students
// vs their marks chart.

#include <iostream>
#include <iomanip>

const int STUDENTS = 4; // Array dimensions
const int SUBJECTS = 5;

int main()
{
  int marks[STUDENTS][SUBJECTS] = {{100, 75, 85, 70, 85},
                                   {75, 60, 58, 60, 70},
                                   {45, 50, 55, 75, 50},
                                   {20, 40, 35, 48, 45}};
  std::cout << "          ENG  BUR  PHY  CHEM MATH";
  for (int i = 0; i < STUDENTS; i++)
  {
    std::cout << "\nSTUDENT" << i + 1;
    for (int j = 0; j < SUBJECTS; j++)
      std::cout << std::setw(5) << marks[i][j];
  }
  std::cout << std::endl;
  return 0;
}
