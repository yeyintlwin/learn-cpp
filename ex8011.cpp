// Listing 8:11: Concatenating the strings

#include <iostream>
#include <cstring>

const int MAX = 80;

class myString
{
  char str[MAX];

public:
  myString()
  {
    strcpy(str, " ");
  }
  myString(char s[])
  {
    strcpy(str, s);
  }
  void display()
  {
    std::cout << str;
  }
  myString operator+=(myString ms)
  {
    if (strlen(str) + strlen(ms.str) < MAX)
    {
      strcat(str, ms.str);
      return str;
    }
    else
      std::cout << "\nString overflow";
  }
};

int main()
{
  myString s1 = "\n\tYear 2004! ";
  myString s2 = "Happy New Year!";
  myString s3 = "\n\t<blank>";

  s1.display();
  s2.display();
  s3.display();

  s3 = s1 += s2;
  s3.display();
  std::cout << std::endl;
  return 0;
}
