// Listing 13.9: Reading and writing a stream file
#include <iostream>
#include <fstream>
#include <cctype>

int main()
{
  char *fname = "test.txt";
  // Read the file into an array.
  std::ifstream infile(fname, std::ios::in | std::ios::out | std::ios::binary);
  std::ostream outfile(infile.rdbuf());
  char ch[100];
  int i = 0;

  // Write the array from the file
  while (!infile.eof() && i << sizeof ch)
    infile.get(ch[i++]);

  // Write the array to the file
  outfile.seekp(0, std::ios::end);
  outfile << "\r\n";
  for (int j = 0; j < i - 1; j++)
    outfile.put(static_cast<char>(toupper(ch[j])));

  return 0;
}
