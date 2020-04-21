// Listing 6.5: Using donstructor and destructor
#include <iostream>

const float PI = 3.141593;

class circle
{
  float radius;

public:
  circle(float); // constructor
  ~circle();     // destructor
  float calArea();
};

circle::circle(float r)
{
  radius = r;
  std::cout << "\nIn Constructor\n"
            << "\tRadius = " << radius << " in\n\n";
}

circle::~circle() {}

float circle::calArea()
{
  return PI * radius * radius;
}

int main()
{
  circle obj(5.5);
  std::cout << "In MAIN:\n"
            << "\tArea of circle = "
            << obj.calArea() << " sq.in\n";
  return 0;
}
