// Listing 4.3: This program shows the different 
// ways how the array are accessed.

#include <iostream>
int x[5] = {10, 20, 50, 40, 50};

int main()
{
  //array accessed with array notation.
  for (int i = 0; i < 5; i++)
  {
    std::cout << " " << x[i];
  }
  std::cout << "\n\n";

  //array accessed with pointer notation.
  for (int i = 0; i < 5; i++)
  {
    std::cout << " " << *(x + i);
  }
  std::cout << "\n\n";

  //array accessed with pointer.
  int *xp = x;
  for (int i = 0; i < 5; i++)
  {
    std::cout << " " << *(xp++);
  }
  std::cout << "\n\n";

  return 0;
}
