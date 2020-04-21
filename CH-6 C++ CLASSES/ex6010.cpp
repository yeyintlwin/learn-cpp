// Listing 6.10: Overloaded constructors
#include <iostream>

class Box
{
  float height, width, depth;

public:
  Box(){};
  Box(float h, float w, float d)
  {
    height = h;
    width = w;
    depth = d;
  }
  float calVolume()
  {
    return height * width * depth;
  }
};

int main()
{
  Box thisBox(7.5, 8.5, 9.5);
  Box otherBox;
  otherBox = thisBox;
  std::cout << "Volume = " << otherBox.calVolume()
            << std::endl;
  return 0;
}
