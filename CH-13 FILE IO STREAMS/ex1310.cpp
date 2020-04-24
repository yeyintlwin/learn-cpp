// Listing 13.10: The open() and close() member functions
#include <iostream>
#include <fstream>
#include <cctype>

int main()
{
  // An ofstream object without a file.
  std::ofstream outfile;

  std::cout << "Creating the test1.txt file...\n";
  outfile.open("test1.txt");
  outfile << "This is TEST1";
  outfile.close();

  std::cout << "Creating the test2.txt file...\n";
  outfile.open("test2.txt");
  outfile << "This is TEST2";
  outfile.close();

  return 0;
}
