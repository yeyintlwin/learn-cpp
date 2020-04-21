#include <iostream>

#define mkstr(s) #s
#define a 8.3297
#define MAX(i, j) (((i) > (j)) ? i : j)
#define concat(c, d) c##d

int main()
{
  std::cout << mkstr(yeyintlwin) << std::endl;
  std::cout << "Value of a is " << a << std::endl;

  int b, c;

  b = 250;
  c = 25;

  std::cout << "The maximum is " << MAX(b, c) << std::endl;

  int xy = 30;
  std::cout << concat(x, y) << std::endl;

  return 0;
}
