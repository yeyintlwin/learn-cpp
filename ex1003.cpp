// Listing 10.3: <cstdarg> library function
#include <iostream>
#include <cstdarg>

void Books(int n, ...)
{
  va_list ap;
  va_start(ap, n);

  while (n--)
  {
    int year = va_arg(ap, int);
    char *nm = va_arg(ap, char *);
    std::cout << year << '\t' << nm << std::endl;
  }
  va_end(ap);
};

int main()
{
  Books(5, 1992, "BASIC", 1993, "FORTRAN",
        1998, "C++", 2000, "VISUAL BASIC",
        2004, "??");
  return 0;
}
