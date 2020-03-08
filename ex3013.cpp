#include <iostream>
// n! =  n( n - 1 )  n( n - 2 )   n( n - 3 ) ... (3)(2)(1)

int main()
{
  long double i = 2, n, nfac = 1;

  std::cout << "Enter n: ";
  std::cin >> n;

  do
    nfac *= i++;
  while (i <= n);

  std::cout << "Factorial of " << n << " is " << nfac << std::endl;

  return 0;
}
