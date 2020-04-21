// Listing 8.6: Adding vectors
#include <iostream>

class coord
{
  int xco, yco;

public:
  coord()
  {
    xco = 0;
    yco = 0;
  }
  coord(int i, int j)
  {
    xco = i;
    yco = j;
  }
  void getXy(int &i, int &j)
  {
    i = xco;
    j = yco;
  }
  coord operator+(coord obj)
  {
    return coord(xco + obj.xco, yco + obj.yco);
  }
  coord operator-(coord obj)
  {
    return coord(xco - obj.xco, yco - obj.yco);
  }
};

int main()
{
  coord v1(2, 3), v2(5, 2), vr;
  int x, y;
  std::cout << "First vector for v1 is\n\t(2, 3)\n\n";
  std::cout << "Second vector for v2 is\n\t(5, 2)\n\n";
  vr = v1 + v2;

  vr.getXy(x, y);
  std::cout << "Thus New vector for v1 + v2 is\n"
            << "\t(" << x << ", " << y << ")\n\n";
  vr = v2 - v1;
  vr.getXy(x, y);

  std::cout << "New vector for v2 - v1 is\n"
            << "\t(" << x << ", " << y << ")\n\n";
  return 0;
}
