// Listing 6.7: Using const qualifier
#include <iostream>
const float PI = 3.141593;

class circle
{
  float radius;

public:
  circle(float r)
  {
    radius = r;
    std::cout << "\nIn Constructor\n"
              << "\tRadius = " << radius << " in\n\n";
  };
  void calArea() const
  {
    std::cout << "In MAIN:\n"
              << "\tArea of circle = "
              << PI * radius * radius << " sq.in\n";
  }
};

int main()
{
  const circle obj(5.5);
  obj.calArea();
  return 0;
}
