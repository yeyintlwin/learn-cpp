// Listing 7.2: This program averages a student's marks.
#include <iostream>

const int SIZE = 5;

int main()
{
  int subj[SIZE] = {96, 75, 98, 95, 100};
  float total = 0;

  std::cout << "English   = " << subj[0] << std::endl
            << "Burmese   = " << subj[1] << std::endl
            << "Physic    = " << subj[2] << std::endl
            << "Chemistry = " << subj[3] << std::endl
            << "Math      = " << subj[4] << std::endl;

  for (int i = 0; i < 5; i++)
    total += subj[i];

  float avg = total / SIZE;
  std::cout << "\nAverage = " << avg << std::endl;
  return 0;
}
