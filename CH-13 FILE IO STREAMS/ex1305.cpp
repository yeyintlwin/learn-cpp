// Listing 13.5: Reading strings from a file
#include <iostream>
#include <fstream>

int main()
{
  const int MAX = 80;
  char buffer[MAX];

  std::ifstream infile("test.txt");
  while (infile)
  {
    infile.getline(buffer, MAX);
    std::cout << buffer;
  }
  std::cout << std::endl;
  return 0;
}
