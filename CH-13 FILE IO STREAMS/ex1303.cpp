// Listing 13.3: Avoiding opening an existing file
#include <iostream>
#include <fstream>

int main()
{
  std::cout << "Opening file...\n";
  std::ofstream outfile("text.txt", std::ios::in); // noreplace);

  if (outfile.fail())
  {
    std::cout << std::endl
              << "File already exists!\n"
              << "Delete it (Y/N)? " << std::endl;
    char ch;
    std::cin >> ch;
    if ((ch == 'Y') || (ch == 'y'))
    {
      std::ofstream outfile("test.txt");
      outfile << "There are test data.\n"
              << "New file created.\n";
    }
    else
      std::cout << "File not opened.\n";
  }
  std::cout << std::endl;
  return 0;
}
