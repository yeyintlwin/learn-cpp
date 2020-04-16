// Listing 8.1: Increamenting a counter value
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
  void incrCount()
  {
    count++;
  }
};

int main()
{
  counter x, y; // x = 100, y = 100
  std::cout << "\nBefore incrementing\n"
            << "\tx = " << x.getCount()
            << "\n\ty = " << y.getCount() << std::endl;
  x.incrCount();
  y.incrCount();
  y.incrCount();
  std::cout << "\n\nAfter incrementing\n"
            << "\tx = " << x.getCount()
            << "\n\ty = " << y.getCount() << std::endl;
  return 0;
}
