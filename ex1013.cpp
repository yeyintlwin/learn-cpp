// Listing 1.13: Using the comma operator
#include <iostream>
int main()
{
    float a, b, c, num;

    a = 255.78;
    b = -100;
    c = 18;

    num = (a++, b + 3, --c + 3); //256.78, -97, 20

    std::cout << "\nValue returned is " << num << std::endl;

    std::cout << "a: " << a << std::endl; //256.78
    std::cout << "b: " << b << std::endl; //-100
    std::cout << "c: " << c << std::endl; //17

    return 0;
}