// Listing 7.7: TThis program passes a three-element integer array.
// to a function where the array elements are altered.

#include <iostream>

const int SIZE = 3;

void modify(int x[])
{
  std::cout << "\nInside FUNCTION modify()\n";
  for (int i = 0; i < SIZE; ++i)
  {
    x[i] = 2 * x[i];
    std::cout << "\tX[" << i + 1 << "] = " << x[i] << std::endl;
  }
}

int main()
{
  int i, x[SIZE];
  void modify(int x[]);
  std::cout << "From MAIN before calling the function\n";
  for (i = 0; i < SIZE; ++i)
  {
    x[i] = i + 1;
    std::cout << "\tX[" << i + 1 << "] = " << x[i] << std::endl;
  }

  modify(x);
  std::cout << "\nFrom MAIN after the function is called\n";
  for (i = 0; i < SIZE; ++i)
  {
    x[i] = i + 1;
    std::cout << "\tX[" << i + 1 << "] = " << x[i] << std::endl;
  }
  return 0;
}
