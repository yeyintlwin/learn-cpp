// Listing 13.1: Writing strings to a file
#include <iostream>
#include <fstream>

int main()
{
  std::cout << "Creating file...\n";
  std::ofstream outfile("test.txt");
  std::cout << "Writing to the file...\n";
  outfile << "\n\tReaching new heights in global education.\n";
  return 0;
}