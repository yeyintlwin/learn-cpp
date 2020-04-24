// Listing 13.8: The tellg() member function
#include <iostream>
#include <fstream>

int main()
{
  std::ifstream f1("test.txt");
  while (!f1.eof())
  {
    char c1;
    f1.get(c1);
    if (!f1.eof())
      std::cout << c1;
  }
  std::cout << std::endl
            << std::endl;

  std::ifstream f2("test.txt");
  while (!f2.eof())
  {
    char c2;
    std::streampos here = f2.tellg();
    f2.get(c2);
    if (c2 == ' ')
      std::cout << "Position " << here << " is a space\n";
  }
  std::cout << std::endl;
  return 0;
}
