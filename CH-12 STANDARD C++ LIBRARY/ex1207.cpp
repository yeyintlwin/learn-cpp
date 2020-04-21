// Listing 12.7: Comparing strings
#include <iostream>
#include <string>

int main()
{
  std::string s1("C++ ");
  std::string s2("Programming ");
  if ("Bye " < s1)
    if (s2 == "Programming ")
      if (s2 > s1)
      {
        std::string s3("Complete ");
        std::string s4 = s3 + s1 + s2;
        std::cout << s4 << std::endl;
      }
  return 0;
}
