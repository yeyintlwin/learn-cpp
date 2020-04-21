// Listing 12.6: Searching strings
#include <iostream>
#include <string>

int main()
{
  std::string s4("Hello ");
  std::string s5("Complete C++");
  s4 += s5;
  s4 += '!';
  s4[5] = ',';
  s4.at(0) = 'Z';

  // Hello,Complete C++!

  // Searching strings
  int n = s4.find("C++");
  std::cout << "\n\tn = " << n << std::endl;
  n = s4.find('l');
  std::cout << "\n\tn = " << n << std::endl;
  n = s4.rfind('l');
  std::cout << "\n\tn = " << n << std::endl;
  n = s4.find("bye");
  std::cout << "\n\tn = " << n << std::endl;
  return 0;
}
