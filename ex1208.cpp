// Listing 12.8: Using the stringmember fuctions
#include <iostream>
#include <string>

void test(const std::string &str)
{
  if (str.empty())
    std::cout << "\n\tThe string is empty\n";
  else
  {
    int len = str.length();
    std::cout << "\n\tThe string has "
              << len << " characters.\n\t\""
              << str << "\"\n";
  }
}

int main()
{
  std::string str;
  test(str);

  str = "C++ Programming";
  test(str);

  str.clear();
  test(str);

  return 0;
}
