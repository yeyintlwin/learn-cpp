// LINEAR REGRESSION METHOD
// Listing 3.15: The program reads in pairs of data
// values x and y, calculates, and prints the values of
// the regression coefficients a and b.

#include <iostream>

int main()
{
  int i = 1, n = 5;
  double x, y, sumx, sumy, sumxx, sumxy, a, b;

  sumx = sumy = sumxx = sumxy = 0;

  std::cout << "Enter x and y data array\n";

  do
  {
    std::cin >> x >> y;

    sumx += x;
    sumy += y;
    sumxx += x * x;
    sumxy += x * y;

    i++;
  } while (i <= n);

  //This is the regression formula.
  b = (n * sumxy - sumx * sumy) / (n * sumxx - sumx * sumx);
  a = (sumy - b * sumx) / n;

  //Print result.
  if (b < 0)
    std::cout << "\nY = " << a << b << "x" << std::endl;
  else
    std::cout << "" << a << " + " << b << "x" << std::endl;

  return 0;
}
