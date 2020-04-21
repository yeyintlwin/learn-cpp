// Listing 10.2: Using <cerrno> library function
#include <iostream>
#include <cmath>
#include <cerrno>

int main()
{
  double num;
  do
  {
    errno = 0;
    std::cout << "\nEnter a positive number\n"
              << "(0 to quit)\n";
    std::cin >> num;
    if (num != 0)
    {
      double x = sqrt(num);
      if (errno == 0)
        std::cout << "Square root of " << num
                  << " is " << x << std::endl;
      else
        std::cout << "Invalid entity" << std::endl;
    }
  } while (num != 0);
  return 0;
}
