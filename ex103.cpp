#include <iostream>
// "wchar_t"
// if C++ have wide character class library.
// We can be use wout object and take characters from 16 bits wide char data type and can stream output.
int main()
{
    char ch;
    ch = 'C';
    std::cout << ch;
    ch = '+';
    std::cout << ch << ch << std::endl;

    return 0;
}