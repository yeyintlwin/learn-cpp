// Listing 10.1: Using <cassert> library function
#include <iostream>
#include <cassert>

void showMsg(char);

int main()
{
  char msg = 'a';
  showMsg(msg);
  return 0;
}

void showMsg(char msg)
{
  assert(msg != 'a');
  std::cout << msg << std::endl;
}