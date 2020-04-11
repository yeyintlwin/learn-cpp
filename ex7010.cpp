// Listing 7.10: This program solves the following
// simultaneous equations
// 8x + 2y + 3z = 30
//  x - 9y + 2z =  1
// 2x + 3y + 6z = 31
// using the Gauss-Seidel iterative method.

#include <iostream>
#include <cmath>

int main()
{
  int i, j, n = 3, m;

  // This is coefficient matrix
  double c[][3] = {{8, 2, 3},
                   {1, -9, 2},
                   {2, 3, 6}};

  // Right-hand side vector
  double r[] = {30, 1, 30};
  // Assume solution vector
  double x[] = {1, 1, 1};
  double temp;
  do
  {
    m = 0;
    for (i = 0; i < n; ++i)
    {
      temp = r[i];
      for (j = 0; j < n; ++j)
        if (i != j)
          temp -= x[j] * c[i][j];
      temp /= c[i][i];
      if (fabs(temp - x[i]) > 1e-7)
        ++m;
      x[i] = temp;
    }
  } while (m != 0);

  // Print output result
  std::cout << "The solution vector is\n";
  for (i = 0; i < n; ++i)
    std::cout << "X[" << i + 1 << "] = "
              << x[i] << std::endl;
  return 0;
}
