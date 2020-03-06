#include <iostream>
#include <math.h>
int main()
{
    double a, b, c, s, area;
    std::cout << "Enter three sides of triangle\n";
    std::cin >> a >> b >> c;
    if ((a + b > c) && (b + c > a) && (c + a > b))
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        std::cout << "\nArea of triangle = " << area << std::endl;
    }
    else
    {
        std::cout << "\nTriangle can't be formed.";
    }

    return 0;
}