// Listing 12.4: Subscripting strings
#include <iostream>
#include <string>

int main()
{
  std::string s4("Hello Complete C++! ");
  char ch1 = s4[1];
  char ch2 = s4.at(2);

  s4[5] = ',';
  std::cout << "\n\tch1 = " << ch1 << "\n\tch2 = " << ch2
            << "\n\ts4 = " << s4 << std::endl;
  s4.at(0) = 'Z';
  std::cout << "\n\ts4 = " << s4 << std::endl;
  return 0;
}
