// Listing 11.3: Defining more than one generic data type
#include <iostream>
template <class X1, class X2>

void myTemp(X1 a, X2 b)
{
  std::cout << "\n\ta = " << a
            << "\n\tb = " << b << std::endl
            << std::endl;
}

int main()
{
  myTemp(10, "COMPLETE C++");
  myTemp(0.123456, 56789);
  return 0;
}
