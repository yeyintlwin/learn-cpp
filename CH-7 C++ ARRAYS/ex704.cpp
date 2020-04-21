// Listing 7.4: This program checks a set of numbers
// and reports the minimum and maximum values found.

#include <iostream>

int MIN(int a, int b)
{
  return (a < b) ? a : b;
}

int MAX(int a, int b)
{
  return (a > b) ? a : b;
}

const int N = 25;

int main()
{
  int minval, maxval;
  int val[] = {
      20, 11, 13, 41, 55,
      25, 45, 2, 84, -3,
      7, -9, 32, 16, 54,
      82, 51, 99, -7, 77,
      -11, 71, 29, 33, 98};
      
  minval = maxval = val[0];

  for (int i = 1; i < N; ++i)
  {
    minval = MIN(minval, val[i]);
    maxval = MAX(maxval, val[i]);
  }

  std::cout << "Minimum value = " << minval << std::endl;
  std::cout << "Maximum value = " << maxval << std::endl;
  return 0;
}
