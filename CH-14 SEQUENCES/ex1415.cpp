// Listing 14.15: Adding elements to a list
#include <iostream>
#include <list>

int main()
{
  std::list<char> charList;
  int kount = 0;

  for (int i = 0; i < 7; ++i)
    charList.push_front(65 + i);

  std::list<char>::iterator iter;
  std::cout << std::endl;

  for (iter = charList.begin(); iter != charList.end(); iter++)
    std::cout << "\tElement #" << kount++ << ". " << *iter << std::endl;

  return 0;
}
