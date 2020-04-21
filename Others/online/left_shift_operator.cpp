/* Program to demonsrte use of left shift operator */

#include <iostream>

int main()
{
    // a = 5 (00000101), b = 9 (00001001)
    unsigned char a = 5, b = 9;
    int c;

    // The result is 00001010 = 10
    c = a << 1;
    std::cout << "a << 1 = " << c << std::endl;

    // The result is 00010010 = 18
    c = b << 1;
    std::cout << "b << 1 = " << c << std::endl;
    return 0;
}