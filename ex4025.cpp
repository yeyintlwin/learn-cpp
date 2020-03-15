// Listing 4.25: Passing References
#include <iostream>

struct history
{
  char name[80];
  int age;
  float height;
};

void show(history &);

int main()
{
  history hs = {"ArKarAung", 25, 5.11}; // initialize
  show(hs);
  return 0;
}

void show(history &x) // call by reference
{
  std::cout << x.name << std::endl
            << x.age << " yrs\n"
            << x.height << " ft\n";
}