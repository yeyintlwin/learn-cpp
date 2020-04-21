// Listing 12.2: Asigning strings
#include <iostream>
#include <string>

// using namespace std;
int main()
{
  std::string s1;
  std::string s2("This is a string");
  std::cout << "\n\ts2 = " << s2 << std::endl;

  s1 = s2;
  std::cout << "\n\ts1 = " << s1 << std::endl;
  std::string s3 = "A different string";
  std::cout << "\ts3 = " << s3 << std::endl;

  return 0;
}
