// Listing 10.5: Using <cstring>
#include <iostream>
#include <cstring>

int main()
{
  int len;
  char msg[] = "Wrong.";
  char pwd[40];

  std::cout << "Password? ";
  std::cin >> pwd;
  len = strlen(pwd);

  if (strcmp(pwd, "C++") == 0) // compare
    strcpy(msg, "Right.");
  std::cout << msg << "\nYou typed "
            << len << " characters\n";
  return 0;
}
