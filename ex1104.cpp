// Listing 11.4: Searching an array for an object
#include <iostream>
#include <cstring>

template <class X>

void find(X obj, X *list, int size)
{
  for (int i = 0; i < size; i++)
    if (list[i] == obj)
    {
      std::cout << "\n\t" << obj << " is PRESENT.\n";
      return;
    }

  std::cout << "\n\t" << obj << " is ABSENT.\n";
}

int main()
{
  int a[] = {10, 14, 18, 25, 56};
  char *c = "This is a test";
  double d[] = {1.1, 5.5, 10.6, 25.9};

  find(14, a, 5);
  find('b', c, (int)strlen(c));
  find(0.5, d, 4);
  return 0;
}
