// Listing 6.2: Using the private member variable
#include <iostream>

const float PI = 3.141593;

class circle
{
  float radius; // private member variable
public:
  void setRadius(float); // public member variable
  float calArea();
};

void circle::setRadius(float r)
{
  radius = r;
  std::cout << "\nin FUNCTION setRadius():\n"
            << "\tRadius = " << radius << " in\n\n";
}

float circle::calArea()
{
  return PI * radius * radius;
}

int main()
{
  circle obj;
  obj.setRadius(5.5); // call public function
  std::cout << "In MAIN:\n"
            << "\tArea of circle = " << obj.calArea()
            << " sq.in\n";
  return 0;
}
