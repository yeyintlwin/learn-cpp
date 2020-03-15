// Listing 2.3: Calculate the area of triangle
#include <iostream>

float calArea(float, float);

int main(int argc, char const *argv[])
{
    float area = calArea(10, 20);
    std::cout << "\nBase: " << 10;
    std::cout << "\nHeight: " << 20;
    std::cout << "\nArea of the triangle: " << area << std::endl;
    return 0;
}

float calArea(float b, float h)
{
    float area = 0.5 * b * h;
    return area;
}