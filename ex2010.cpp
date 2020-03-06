#include <iostream>
#include <cmath>

long int power(int, int);

int main()
{
    long int x, y, temp;

    std::cout << "Enter x and y\n";
    std::cin >> x >> y;
    std::cout.precision(10); //Used to format floating-point values on output operation.

    temp = power(x, y);

    std::cout << x << " to the power of "
              << y << " = " << temp;
    std::cout << std::endl
              << "\nUsing math function pow(): "
              << pow(x, y) << std::endl;
    std::cout << std::endl;

    return 0;
}

long int power(int a, int b)
{
    long int temp = 1;
    for (; b > 0; b--)
        temp *= a;

    return temp;
}