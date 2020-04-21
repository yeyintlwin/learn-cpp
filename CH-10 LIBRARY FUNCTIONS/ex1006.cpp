// Listing 10.6: Using <ctime>
#include <iostream>
#include <ctime>

int main()
{
  time_t now = time(0);

  std::cout << "\n\t" << asctime(localtime(&now)) << std::endl;
  std::cout << "\n\t" << asctime(gmtime(&now)) << std::endl;
  std::cout << "\n\t" << ctime(&now) << std::endl;

  return 0;
}
