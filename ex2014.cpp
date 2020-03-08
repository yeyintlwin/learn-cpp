#include <iostream>

long double facto(int);

int main()
{
  int n;

  std::cout << "Enter a number: ";
  std::cin >> n;
  std::cout << "Factorial of " << n << " is " << facto(n) << std::endl;

  return 0;
}

long double facto(int i)
{
  if (i <= 1)
    return 1;
  else
    return (i * facto(i - 1));
}