// Listing 8.2: Uning overloaded ++ operator
#include <iostream>

class counter
{
  unsigned int count;

public:
  counter()
  {
    count = 100;
  }
  int getCount()
  {
    return count;
  }
  void operator++(int) // for x++ and y++
  {
    count++;
  }
  void operator++() // for ++x and ++y
  {
    count++;
  }
};

int main()
{
  counter x, y;

  std::cout << "\nBefore incrementing\n"
            << "\tx = " << x.getCount()
            << "\n\ty = " << y.getCount();
  x++;
  y++;
  ++y;
  std::cout << "\n\nAfter incrementing\n"
            << "\tx = " << x.getCount()
            << "\n\ty = " << y.getCount();
  return 0;
}
