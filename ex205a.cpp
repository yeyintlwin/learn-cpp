#include <iostream>

void sqroot(float, float);

int main()
{
    sqroot(625, 10000);
    return 0;
}

void sqroot(float xn, float xr)
{
    for (int i = 1; i <= 50; i++)
    {
        xr = (xr + xn / xr) / 2;
        if (i % 5 == 0)
            std::cout << "Root of " << xn << " is " << xr << std::endl;
    }
}