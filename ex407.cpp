// Linting 4.7: This program shows how arrays are
// passed by pointer.
#include <iostream>

const int MAX = 5;
void convert(double *);

int main()
{
  double avg, sum = 0;
  double inches[MAX] = {10, 20, 30, 40, 50};

  convert(inches);

  for (int i = 0; i < MAX; i++)
  {
    std::cout << std::endl
              << "Length[" << i + 1 << "] = " << inches[i] << "  cm";
    sum += inches[i];
  }
  avg = sum / MAX;

  std::cout << "\n\n"
            << "Average = " << avg << " cm" << std::endl;
  return 0;
}

void convert(double *xp)
{
  for (int i = 0; i < MAX; i++)
    *xp++ *= 2.54;
}