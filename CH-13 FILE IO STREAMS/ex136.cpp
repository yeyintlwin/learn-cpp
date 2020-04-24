// Listing 13.6: Testing End-of-file
#include <iostream>
#include <fstream>

int main()
{
  std::ifstream outfile("test.txt");

  while (!outfile.eof())
  {
    char ch;
    outfile.get(ch);
    if (!outfile.eof())
      std::cout << ch;
  }
  std::cout << std::endl;
  return 0;
}
