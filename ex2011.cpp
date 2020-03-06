//Using overloaded functions.
#include <iostream>

const float PI = 3.141593;

float radius, height, volume;

void calVol(float);
void calVol(float, float);

int main()
{
    std::cout << "\nEnter radius: ";
    std::cin >> radius;
    std::cout << "Enter height: ";
    std::cin >> height;

    calVol(radius);
    std::cout << "\nVolume of sphere is " << volume << std::endl;

    calVol(radius, height);
    std::cout << "\nVolume of cylinder is " << volume << std::endl;

    return 0;
}

void calVol(float r)
{
    volume = 4 * PI * r * r * r / 3;
}

void calVol(float r, float h)
{
    volume = 4 * PI * r * r * h;
}