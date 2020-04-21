// Listing 5.3: Passing references
#include <iostream>

void swap(int &, int &);

int main()
{
  int x = 15, y = 500;

  std::cout << "BEFORE SWAP:\n"
            << x << " " << y;

  swap(x, y);

  std::cout << "\n\nAFTER SWAP:\n"
            << x << " " << y << std::endl;

  return 0;
}

void swap(int &i, int &j)
{
  int temp = i;
  i = j;
  j = temp;
}