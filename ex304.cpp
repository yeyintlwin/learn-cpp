//Reversing an Integer Number.
#include <iostream>

int main()
{
  unsigned long int num, rev, q, r;

  std::cout << "Enter a number\n";
  std::cin >> num;

  q = num / 10;
  rev = num % 10;

START:
  if (q != 0)
  {
    num = q;
    q = num / 10;
    r = num % 10;
    rev = rev * 10 + r;
    goto START;
  }

  std::cout << "The number reversed is\n"
            << rev << std::endl;

  return 0;
}

/*
* Secret of mathematic.
* q = num / 10 = 123456789 / 10 = 12345678
* rev = num % 10 = 123456789 % 10 = 9
* START:
* if(q != 0) = TRUE
* num = q = 12345678
* q = num / 10 = 12345678 / 10 = 1234567
* r = num % 10 = 12345678 % 10 = 8
* rev = rev * 10 + r = 9 * 10 + 8 = 98
* goto START;
********************************************
* num = q = 1234567
* q = num / 10 = 1234567 / 10 = 123456
* r = num % 10 = 1234567 % 10 = 7
* rev = rev * 10 + r = 98 * 10 + 7 = 987
* goto START;
********************************************
**/