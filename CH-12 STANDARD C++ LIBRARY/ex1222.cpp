// Listing 12.22: Using the get() function with parameters
#include <iostream>

int main()
{
  char ch1, ch2, ch3;
  std::cout << "\n\tEnter three letters : ";
  std::cin.get(ch1).get(ch2).get(ch3);
  std::cout << "\n\tch1 = " << ch1 << std::endl
            << "\n\tch2 = " << ch2 << std::endl
            << "\n\tch3 = " << ch3 << std::endl;

  return 0;
}
