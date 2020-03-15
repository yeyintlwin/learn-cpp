
// Listing 4.14: This program creates an array of pointers
// to string, rather than an array of strings.
// to another using pointers.
#include <iostream>

const int MAX = 7;

int main()
{
  char *strp[MAX] = {"TIME ", "IS ", "A GREAT ", "TEACHER,\n", "BUT ", "IT ", "KILLS ITS PUPILS."};

  for (int i = 0; i < MAX; i++)
    std::cout << strp[i];
  std::cout << std::endl;

  return 0;
}
