// Listing 11.5: Creating a class template
#include <iostream>

template <class L1, class L2>

class Area
{
  L1 length;
  L2 width;

public:
  Area(L1 l, L2 w)
  {
    length = l;
    width = w;
  }
  /*  float display()
  {
    std::cout << "\n\tLength = " << length << " inches";
    std::cout << "\n\tWidth = " << width << " feet";
    return length * width / 12;
  } */

  void display()
  {
    std::cout << "\n\tLength = " << length << " inches";
    std::cout << "\n\tWidth = " << width << " feet";
  }

  float calArea()
  {
    return length * width / 12;
  }
};

int main()
{
  float a = 12345; // inches
  float b = 67.89; // feet

  Area<float, float> mt(a, b);
  mt.display();
  // std::cout << "\n\n\tArea = " << mt.display() << " sq ft\n";
  std::cout << "\n\n\tArea = " << mt.calArea() << " sq ft\n";
  return 0;
}
