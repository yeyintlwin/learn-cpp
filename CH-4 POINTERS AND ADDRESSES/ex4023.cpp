// Listing 4.23: Reference variable
#include <iostream>

int main()
{
  int actualint = 1234;
  int &otherint = actualint;

  std::cout << "\nActualint = " << actualint << std::endl;
  std::cout << "Otherint = " << otherint << std::endl;
  otherint++;

  std::cout << "\nActualint = " << actualint << std::endl;
  std::cout << "Otherint = " << otherint << std::endl;
  otherint++;

  std::cout << "\nActualint = " << actualint << std::endl;
  std::cout << "Otherint = " << otherint << std::endl;

  return 0;
}
