// Listing 5.5: Returning references
#include <iostream>

struct sides
{
  int length, width;
};

sides shape[] = {
    {5, 15},
    {12, 27},
    {31, 75},
    {45, 90}};

sides &getLength(int i)
{
  return shape[i - 1];
}

int main()
{
  int choice;
  do
  {
    std::cout << "\nEnter shape # (1-4, 0 to Quit): ";
    std::cin >> choice;
    if (choice > 0 && choice < 5)
    {
      sides &rs = getLength(choice);
      int &rl = rs.length;
      int &rw = rs.width;

      std::cout << "Length = " << rl << " ft\n"
                << "Width  = " << rw << " ft\n"
                << "Area   = " << rl * rw
                << " sq ft\n\n";
    }
  } while (choice > 0 && choice < 5);

  return 0;
}
