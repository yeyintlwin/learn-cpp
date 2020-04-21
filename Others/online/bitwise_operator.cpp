// The program demonstrate use of bitwise operators

#include <iostream>

int main()
{
    // a =5 (00000101), b = 9 (00001001)
    unsigned char a = 5, b = 9;
    unsigned char c;

    std::cout << "a = " << (int)a << ", b = " << (int)b << std::endl;

    // The result is 00000001
    c = a & b;
    std::cout << "a & b = " << (int)c << std::endl;

    // The result is 00001101
    c = a | b;
    std::cout << "a | b = " << (int)c << std::endl;

    // The result is 00001100
    c = a ^ b;
    std::cout << "a ^ b = " << (int)c << std::endl;

    // The result is 11111010 = 250 in 8 bits
    c = ~a;
    std::cout << "~a = " << (int)c << std::endl;

    // The result is 00001010
    c = b << 1;
    std::cout << "b << 1 =  " << (int)c << std::endl;

    // The result is 00000100
    c = b >> 1;
    std::cout << "b >> 1 =  " << (int)c << std::endl;

    return 0;
}