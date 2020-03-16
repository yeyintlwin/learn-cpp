// Listing 5.4: Passing references
#include <iostream>

struct sides
{
  int length, width;
};

void calArea(sides &s)
{
  int &l = s.length;
  int &w = s.width;

  std::cout << "Length = " << l << " ft\n"
            << "Width  = " << w << " ft\n"
            << "Area   = " << l * w << std::endl;
}

int main()
{
  sides rect = {15, 25};
  calArea(rect);
  return 0;
}
