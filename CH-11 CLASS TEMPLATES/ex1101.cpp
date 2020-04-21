// Listing 11.1: Creating a generic function
#include <iostream>

template <class X>

void swap(X &a, X &b)
{
  X temp = a;
  a = b;
  b = temp;
}

int main()
{
  int i1 = 100, i2 = 500;
  float f1 = 25.55, f2 = 75.84;

  std::cout << "\n\tBEFORE SWAP:"
            << "\n\t\tFirst integer number = " << i1
            << "\n\t\tSecond integer number = " << i2
            << "\n\t\tFirst float number = " << f1
            << "\n\t\tSecond float number = " << f2 << std::endl;

  swap(i1, i2); // Swapping integers
  swap(f1, f2); // Sawpping floats

  std::cout << "\n\tAFTER SWAP:"
            << "\n\t\tFirst integer number = " << i1
            << "\n\t\tSecond integer number = " << i2
            << "\n\t\tFirst float number = " << f1
            << "\n\t\tSecond float number = " << f2 << std::endl;

  return 0;
}
