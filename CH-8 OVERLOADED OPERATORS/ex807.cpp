// Listing 8.7: Overloaded + operators with polar coordinates
/**
 * x = radius * cos(angle)
 * y = radius * sin(angle) where angle is in radians
 * radius = square root of x square plus y square
 * angle = atan(y/x)
 */

#include <iostream>
#include <cmath>

class polar
{
private:
  double radius;
  double angle;
  double getx()
  {
    return radius * cos(angle);
  }
  double gety()
  {
    return radius * sin(angle);
  }

public:
  polar()
  {
    radius = 0.0;
    angle = 0.0;
  }
  polar(float r, float a)
  {
    radius = r;
    angle = a;
  }
  void display()
  {
    std::cout << '(' << radius
              << ',' << (int)(angle * 180 / 3.141593) << ')';
  }
  polar operator+(polar p)
  {
    double x = getx() + p.getx();
    double y = gety() + p.gety();
    double r = sqrt(x * x + y * y);
    double a = atan(y / x);
    return polar(r, a);
  }
};

int main()
{
  polar p1(5, 0);
  polar p2(5, 1.57096325);
  polar p3;

  p3 = p1 + p2;
  std::cout << "The given two polar vectors are\n";
  std::cout << "\tP1 = ";
  p1.display();
  std::cout << "\n\tP2 = ";
  p2.display();
  std::cout << std::endl;
  std::cout << "\n\nSum of the two polar vectors is\n";
  std::cout << "\tP3 = ";
  p3.display();
  std::cout << std::endl;
  return 0;
}
