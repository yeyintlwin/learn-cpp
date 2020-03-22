// Listing 5.12: Standard macro defination
#include <iostream>

int main()
{
  std::cout << __FILE__ << std::endl
            << " was compiled on " << std::endl
            << __DATE__ << std::endl
            << " at " << std::endl
            << __TIME__ << std::endl;
  return 0;
}
