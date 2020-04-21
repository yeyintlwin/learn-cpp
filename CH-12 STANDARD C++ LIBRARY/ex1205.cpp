// Listing 12.5: Substrings
#include <iostream>
#include <string>

int main()
{
  std::string s4("Hello,Complete C++!");

  std::cout << "\n\ts4.substr(6, 8) = " << s4.substr(6, 8);
  std::string s7(s4.substr(0, 5));
  std::cout << "\n\ts7 = " << s7 << std::endl;
  std::cout << "\n\tLength of string s4 = "
            << s4.length() << std::endl;
  std::string s8(s4.substr(s4.length() - 4, 4));
  std::cout << "\n\ts8 = " << s8 << std::endl;
  return 0;
}
