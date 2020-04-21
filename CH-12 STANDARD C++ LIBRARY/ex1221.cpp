// Listing 12.21: More on the get() function
#include <iostream>

int main()
{
  char ch;
  while ((ch = std::cin.get()) != EOF)
    std::cout << "ch = " << ch << std::endl;
  std::cout << std::endl
            << "Bye!" << std::endl;
  return 0;
}
