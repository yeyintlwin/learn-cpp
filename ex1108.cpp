// Listing 11.8: Template partial specialization
#include <iostream>

template <class T1, class T2>

class MyTemp
{
  T1 obj1;
  T2 obj2;

public:
  MyTemp(T1 o1, T2 o2) : obj1(o1), obj2(o2) {}
  void display()
  {
    std::cout << "\n\tOBJECT DISPLAY\n\t--------------\n"
              << "\tObject 1: " << obj1 << "\n\tObject 2: "
              << obj2 << std::endl
              << std::endl;
  }
};

template <class T>
class MyTemp<T, char>
{
  T obj1, obj2;

public:
  MyTemp(T o1, char c) : obj1(o1), obj2(o1)
  {
    obj2 += (int)c;
  }
  void display()
  {
    std::cout << "\n\tOBJECT DISPLAY\n"
              << "\t--------------\n"
              << "\tObject 1: " << obj1 << std::endl
              << "\tObject 2: " << obj2 << std::endl
              << std::endl;
  }
};

int main()
{
  MyTemp<int, int> mt1(10, 20);
  MyTemp<int, char> mt2(10, 'B'); // 'B' = 66

  mt1.display();
  mt2.display();
  return 0;
}
