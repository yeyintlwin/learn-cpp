  // Listing 6.3: Using the inline function
#include <iostream>
const float PI = 3.1421593;

class circle
{
  float radius;

public:
  void setRadius(float r)
  {
    radius = r;
    std::cout << "\nIn FUNCTION setRadius():\n"
              << "\tRadius = " << radius << " in\n\n";
  }

  float calArea()
  {
    return PI * radius * radius;
  }
};

int main()
{
  circle obj;

  obj.setRadius(5.5); // call public function
  std::cout << "In MAIN:\n"
            << "\tArea of circle = " << obj.calArea()
            << " sq.in\n";
  return 0;
}
