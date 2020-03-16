// Listing 5.1: Creating a reference

#include <iostream>

int main()
{
  int actualint = 1234;
  int &otherint = actualint;

  std::cout << "\n1st round:\nactualint = " << actualint << std::endl
            << "otherint  = " << otherint++ << std::endl;

  std::cout << "\n2nd round:\nactualint = " << actualint++ << std::endl
            << "otherint  = " << otherint << std::endl;

  std::cout << "\n3rd round:\nactualint = " << actualint << std::endl
            << "otherint  = " << otherint << std::endl;

  std::cout << "\n\nAddresses:\n"
            << "&actualint = " << &actualint << std::endl
            << "&otherint  = " << &otherint << std::endl;

  return 0;
}
