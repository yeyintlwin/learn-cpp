// Listing 11.2: Creating a generic function 'Larger'
#include <iostream>

template <class X>

X Larger(X a, X b)
{
  return a > b ? a : b;
}

int main()
{
  std::cout << "\n\tLarger integer number = " << Larger(12, 345)
            << "\n\tLarger float number = " << Larger(12.34, 456.78)
            << "\n\tLarger character = " << Larger('W', 'V')
            << std::endl;
  return 0;
}
