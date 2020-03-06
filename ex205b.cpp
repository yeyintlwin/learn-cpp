#include <iostream>

float sqroot(float, float);

int main()
{
    float xn, xr;
    std::cout << "Enter a positive real number\n";
    std::cin >> xn;
    std::cout << "Assume its root\n";
    std::cin >> xr;
    std::cout << "Root of " << xn << " is " << sqroot(xn, xr) << std::endl;
    return 0;
}

float sqroot(float xn, float xr)
{
    for (int i = 1; i <= 50; i++)
        xr = (xr + xn / xr) / 2;
    return xr;
}