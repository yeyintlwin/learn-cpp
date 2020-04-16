// Listing 9.2: Using shape.h header
#include <iostream>
#include "shape.h"

class cube : public rect // Derived class
{
    float depth, vol;

public:
    cube(float l, float w, float d) : rect(l, w)
    {
        depth = d;
    }

    void calVol()
    {
        vol = length * width * depth;
    }

    void showVol()
    {
        std::cout << "\tVolume = " << vol << std::endl;
    }
};

int main()
{
    float x, y, z;
    std::cout << "\n\tEnter length : ";
    std::cin >> x;

    std::cout << "\tEnter width : ";
    std::cin >> y;

    std::cout << "\tEnter depth : ";
    std::cin >> z;

    std::cout << std::endl;

    rect rectan(x, y);
    rectan.calArea();
    rectan.showArea();

    cube box(x, y, z);
    box.calVol();
    box.showVol();

    std::cout << std::endl;
    return 0;
}