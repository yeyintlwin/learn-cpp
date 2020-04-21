// Listeing 4.17: Pointers to array of pointers
#include <iostream>

char *str[] = {"ZarNi", "AungMyint", "AyeLwin", "PoCho", 0};

int main()
{
  char **cp = str;
  while (*cp != 0)
    std::cout << *cp++ << std::endl;
  return 0;
}
