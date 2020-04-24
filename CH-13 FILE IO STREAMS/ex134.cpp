// Listing 13.4: Using ofstream() member function
#include <iostream>
#include <fstream>
#include <string>

int main()
{
  std::string str("This is a test");

  // Create an output stream object
  std::ofstream outfile;

  // Associate a file with the stream
  outfile.open("test.txt");

  // Write a string one character at a time
  for (int x = 0; x < 14; x++)
  {
    std::cout << "File pointer: " << outfile.tellp();
    outfile.put(str[x]);
    std::cout << " " << str[x] << std::endl;
  }

  // Close up the file.
  outfile.close();

  return 0;
}
