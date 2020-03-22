// Listing 6.12: Complex overloaded constructors
#include <iostream>

class Point
{
  int x, y;

public:
  Point(int xp = 0, int yp = 0)
  {
    x = xp;
    y = yp;
  }
  void display()
  {
    std::cout << x << ", " << y << ')';
  }
};

class Lines
{
  Point start, stop;

public:
  Lines(Point st, Point sp)
  {
    start = st;
    stop = sp;
  }

  Lines(int x1, int y1, int x2, int y2)
  {
    Point st(x1, y1);
    Point sp(x2, y2);
    start = st;
    stop = sp;
  }

  void Draw()
  {
    std::cout << "\nFrom (";
    start.display();
    std::cout << " to (";
    stop.display();
  }
};

int main()
{
  Point p1(10, 15);
  Point p2(25, 45);
  Lines line1(p1, p2);

  Lines line2(10, 20, 30, 40);

  line1.Draw();
  line2.Draw();
  std::cout << std::endl;
  return 0;
}
