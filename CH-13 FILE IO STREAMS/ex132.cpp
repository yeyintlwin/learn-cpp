// Listing 13.2: Appending to an output file
#include <iostream>
#include <fstream>

int main()
{
  std::cout << "Opening file...\n";
  std::ofstream outfile("test.txt", std::ios::app);
  std::cout << "Writing to file...\n";
  outfile << "\n\t.... here more to come!";
  return 0;
}
