// Listing 2.6: Passing variables bby reference
#include <iostream>

void calArea(float, float, float &);
void printArea(float);

int main()
{
    float base, height, area;

    std::cout << "\nEnter the base and height\n";
    std::cin >> base >> height;

    calArea(base, height, area);
    printArea(area);

    return 0;
}

void calArea(float b, float h, float &x)
{
    x = 0.5 * b * h;
}

void printArea(float a)
{
    std::cout << "\nArea of the triangle is " << a << std::endl;
}