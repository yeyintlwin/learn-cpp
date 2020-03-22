// Listing 6.4: More on the inline function
#include <iostream>

class box
{
  float height, width, depth;

public:
  void setBox(float h, float w, float d)
  {
    height = h;
    width = w;
    depth = d;

    std::cout << "Height = " << height << " ft\n"
              << "Width  = " << width << " ft\n"
              << "Depth  = " << depth << " ft\n";
  }

  float calVol()
  {
    return height * width * depth;
  }
};

int main()
{
  box obj;
  obj.setBox(5.5, 7.5, 10.5);
  std::cout << "" << obj.calVol() << " cu ft\n";
  return 0;
}
