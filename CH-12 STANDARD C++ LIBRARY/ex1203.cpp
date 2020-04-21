// Listing 12.3: Concatenating strings
#include <iostream>
#include <string>

int main()
{
  std::string s4("Hello ");
  std::string s5("Complete C++");
  std::string s6 = s4 + s5;

  std::cout << "\n\ts4 = " << s4 << "\n\ts5 = " << s5
            << "\n\ts6 = " << s6 << std::endl;
  s4 += s5;
  s4 += '!';
  std::cout << "\n\ts4 = " << s4 << std::endl;

  return 0;
}
