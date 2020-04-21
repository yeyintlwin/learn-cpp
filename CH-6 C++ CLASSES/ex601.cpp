// Listing 6.1: Creating a simple class
#include <iostream>

const float PI = 3.141593;

class circle
{
public:
  float radius;    // public member variable
  float calArea(); // public member function
};

// :: scope resolution operator
float circle::calArea() // "circle" class member function
{
  return PI * radius * radius;
}

int main()
{
  circle obj;
  obj.radius = 5.5;
  std::cout << "Radius = " << obj.radius << " in\n"
            << "Area of circle = " << obj.calArea()
            << " sq.in\n";
  return 0;
}
