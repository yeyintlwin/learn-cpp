// Listing 4.1: Referencing variables with pointers 
#include <iostream>

int main()
{
  char c = 'A';
  int i = 123;
  float f = 567.89;

  char *cp = &c;
  int *ip = &i;
  float *fp = &f;

  /* c = 'B';
  i = 321;
  f = 987.65; */


  std::cout << "c = " << *cp << std::endl;
  std::cout << "i = " << *ip << std::endl;
  std::cout << "f = " << *fp << std::endl;

 /*  std::cout << "\nac = " << &c << std::endl;
  std::cout << "ai = " << &i << std::endl;
  std::cout << "af = " << &f << std::endl; */

  return 0;
}
