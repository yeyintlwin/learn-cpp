// Listing 12.17: Output member function
#include <iostream>

int main()
{
  static struct
  {
    char ch[40];
    int alarm;
    int eol;
  } msg = {"Complete C++ Programming", '\a', '\n'};

  std::cout.write(reinterpret_cast<char *>(&msg), sizeof msg);
  return 0;
}
