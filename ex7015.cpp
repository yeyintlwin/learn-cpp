// Listing 7.15: Initializing the multidimensional arrays of object

#include <iostream>
#include <iomanip>

const int ROW = 4;
const int COL = 2;

class Asqr
{
  float a;

public:
  Asqr(float x)
  {
    a = x;
  }
  float getSquare()
  {
    return a * a;
  }
};

int main()
{
  Asqr obj[ROW][COL] = {{1, 5.5},
                        {2, 6.8},
                        {3, 7.4},
                        {4, 8.1}};

  for (int i = 0; i < ROW; i++)
    std::cout << std::setw(10) << obj[i][0].getSquare()
              << std::setw(10) << obj[i][1].getSquare()
              << std::endl;
  return 0;
}
