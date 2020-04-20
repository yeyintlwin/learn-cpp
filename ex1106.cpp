// Listing 11.6: Default values for parameters of a specific type
#include <iostream>

template <class L1, class L2, int add = 10>

class Area
{
  L1 length;
  L2 width;

public:
  Area(L1 l, L2 w)
  {
    length = l + add;
    width = w + add;
  }
  // float
  void display()
  {
    std::cout << "\n\tLength = " << length << " inches";
    std::cout << "\n\tWidth = " << width << " feet";
    // return (length * width / 12);
  }

  float calArea()
  {
    return (length * width / 12);
  }
};

int main()
{
  float a = 12345; // inches
  float b = 67.89; // feet

  Area<float, float> mt1(a, b);
  mt1.display(); //
  // std::cout << "\n\tArea = " << mt1.display() << " s1 ft/n";
  std::cout << "\n\tArea = " << mt1.calArea() << " sq ft/n\n";

  Area<float, float, 100> mt2(a, b);
  mt1.display(); //
  // std::cout << "\n\tArea = " << mt2.display() << " s1 ft/n";
  std::cout << "\n\tArea = " << mt2.calArea() << " sq ft/n" << std::endl;
  return 0;
}
