// Listing 8.16: Using subscript operator
#include <iostream>
#include <cstring>

class myStr
{
  char *sp;

public:
  myStr(char *s = 0);
  ~myStr()
  {
    delete sp;
  }
  void display()
  {
    std::cout << sp << std::endl;
  }
  // Overloaded [] operator.
  char &operator[](int n)
  {
    return *(sp + n);
  }

  const char &operator[](int n) const
  {
    return *(sp + n);
  }
};

// The String class constructor.
myStr::myStr(char *s)
{
  if (s)
  {
    sp = new char[strlen(s) + 1];
    strcpy(sp, s);
  }
  else
    sp = 0;
}

int main()
{
  myStr str1("Complete C++");
  str1.display();

  // Change some string characters.
  str1[4] = 'P';
  str1[5] = 'L';
  str1[6] = 'T';
  str1[7] = 'E';
  str1.display();

  // Change a substring.
  strncpy(&str1[0], "COMPLETE", 8);
  str1.display();

  const myStr str2("\nVERY COMPLETE C++");
  for (int i = 0; i < 18; i++)
    std::cout << str2[i];
  // const string, cannot be modified.
  // strncpy(&str2[0], "COMPLETE", 8);
  // str2.display();
  std::cout << std::endl;
  return 0;
}
