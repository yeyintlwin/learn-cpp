// Listing 9.4: Inheritance with counter class
#include <iostream>

class counter // Base class
{
protected:
  unsigned int count;

public:
  counter()
  {
    count = 100;
  }
  counter(int c)
  {
    count = c;
  }
  int getCount()
  {
    return count;
  }
  counter operator++(int)
  {
    count++;
    return counter(count);
  }
};

class countDeriv : public counter // Derived class
{
public:
  counter operator--(int)
  {
    count--;
    return counter(count);
  }
  counter operator--()
  {
    --count;
    return counter(count);
  }
};

int main()
{
  countDeriv myCalss; // myClass = 100
  std::cout << "\n\tmyClass = "
            << myCalss.getCount();

  myCalss++; // myCalss = 101
  myCalss++; // myCalss = 102
  myCalss++; // myCalss = 103
  std::cout << "\n\tmyClass = "
            << myCalss.getCount();

  myCalss--; // myCalss = 102
  myCalss--; // myCalss = 101
  std::cout << "\n\tmyClass = "
            << myCalss.getCount();

  --myCalss; // myCalss = 100
  std::cout << "\n\tmyClass = "
            << myCalss.getCount();

  std::cout << std::endl;

  return 0;
}
