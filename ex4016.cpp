// Listing 4.16: Pointers to pointers
#include <iostream>

void firstNeg(float **xpp)
{
  while (**xpp != 0)
    if (**xpp < 0)
      break;
    else
      (*xpp)++;
}

int main()
{
  float x[] = {10, 25, -50, 36, 5, -42, 0};
  float *xp = x;

  firstNeg(&xp);

  std::cout << *xp;

  return 0;
}
