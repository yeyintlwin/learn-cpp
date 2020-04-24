// Listing 13.7: Seeking within a file
#include <iostream>
#include <fstream>

int main()
{
  std::ifstream outfile("test.txt");
  outfile.seekg(4);
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
