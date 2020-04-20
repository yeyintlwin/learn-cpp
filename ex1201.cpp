// Lising 12.1: Constructing strings
#include <iostream>
#include <string>

int main()
{
  std::string s1;

  std::string s2("This is a string");
  std::cout << "\n\ts2 = " << s2 << std::endl;

  // Construct a string object from a character array
  char ch[] = "This is a character array";
  std::string s3(ch);
  std::cout << "\n\ts3 = " << s3 << std::endl;

  return 0;
}
