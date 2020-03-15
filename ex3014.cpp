// Listing 3.14: This program prints a list of 
// the prime factors of a number

/*
* Example program is fucking wrong in logic.
**/
#include <iostream>

int main()
{
  /* My fucked code. */
  int num, i = 1;

  std::cout << "Enter a number\n";
  std::cin >> num;
  std::cout << "Prime factors of " << num << " is\n";

  do
  {
    i++;

    if (num % i == 0)
      std::cout << i << " ";

  } while (!(i >= num));

  std::cout << std::endl;

  /*
  * Original code.
  * 
  int divisor = 2, adder = 1, n;

  std::cout << "Enter a number\n";
  std::cin >> n;
  std::cout << "Prime factors of " << n << " is\n";

  do
  {
    if (n % divisor == 0)
    {
      n /= divisor;
      std::cout << divisor << " ";
    }
    else
    {
      divisor += adder;
      adder = 2;
    }
  } while (n / 2 > 1);

  std::cout << '\n';
 */
  return 0;
}

