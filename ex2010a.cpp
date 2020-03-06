#include <iostream>
#include <cmath>

void power(int, int);
long int temp;

int main()
{
    long int x, y;

    std::cout << "Enter x and y\n";
    std::cin >> x >> y;
    std::cout.precision(10); //Used to format floating-point values on output operation.

    power(x, y);

    std::cout << x << " to the power of "
              << y << " = " << temp << std::endl;

    return 0;
}

void power(int a, int b)
{
    temp = 1;
    for (; b > 0; b--)
        temp *= a;
}