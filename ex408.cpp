// Listening 4.8: This program swaps two numbers
// passed to function as arguement;
#include <iostream>

void swap(int *, int *);

int main()
{
  int first = 95, second = 15;

  std::cout << "Before swapping";
  std::cout << "\nFirst = " << first
            << "\nSecond = " << second;

  swap(&first, &second);

  std::cout << "\n\nAfter swapping";
  std::cout << "\nFirst = " << first
            << "\nSecond = " << second
            << std::endl;

  return 0;
}

void swap(int *x, int *y)
{
  int temp = *x;
  *x = *y;
  *y = temp;
}