#include <iostream>

float base, height, area;
void getData();
void calArea();
void printArea();

int main()
{
    getData();
    calArea();
    printArea();

    return 0;
}

void getData()
{
    std::cout << "\nEnter base and height\n";
    std::cin >> base >> height;
}

void calArea()
{
    area = 0.5 * base * height;
}

void printArea()
{
    std::cout << "\nArea of the triangle is " << area << std::endl;
}