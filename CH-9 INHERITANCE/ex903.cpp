// Listing 9.3: Creating a derived class 'triangle'
#include <iostream>
#include "shape.h"

class triangle : public rect
{
public:
  triangle(float x = 0, float y = 0) : rect(x, y) {}
  void calArea()
  {
    area = 0.5 * length * width;
  }
};

int main()
{
  float x, y;

  std::cout << "\n\tEnter base : ";
  std::cin >> x;
  std::cout << "\tEnter height : ";
  std::cin >> y;
  std::cout << std::endl
            << std::endl;

  triangle tri(x, y);
  tri.calArea();
  tri.showArea();
  std::cout << std::endl;

  return 0;
}
