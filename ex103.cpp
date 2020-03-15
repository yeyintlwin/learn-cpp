// Listing 1.3: Using a character variable
#include <iostream>
// "wchar_t"
// if C++ have wide character class library.
// We can be use wout object and take characters from 16 bits wide char data type and can stream output.
int main()
{
    char ch;                            // char variable
    ch = 'C';                           // assign 'C' to ch
    std::cout << ch;                    // display 'C'
    ch = '+';                           // assign '+' to ch
    std::cout << ch << ch << std::endl; // display '++'

    return 0;
}