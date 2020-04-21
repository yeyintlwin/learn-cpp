// Listing 9.1: Create base class
#include <iostream>

class rect // Base class
{
    float length, width, area;

public:
    rect(float l, float w)
    {
        length = l;
        width = w;
    }

    void calArea()
    {
        area = length * width;
    }

    void showArea()
    {
        std::cout << "\tArea = " << area << std::endl;
    }
};

int main()
{
    float x, y;

    std::cout << "\n\tEnter length: ";
    std::cin >> x;
    std::cout << "\tEnter width: ";
    std::cin >> y;
    std::cout << std::endl
              << std::endl;

    rect rectan(x, y);
    rectan.calArea();
    rectan.showArea();
    std::cout << std::endl;

    return 0;
}