// Listing 2.5a: This program display rhe square root of 
// a number passed from a program to the function
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