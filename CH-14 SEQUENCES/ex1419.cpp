// Listing 14.19: Comparing lists
#include <iostream>
#include <list>

int main()
{
  std::list<char> charList1;

  for (int x = 0; x < 10; ++x)
    charList1.push_front(65 + x);

  std::list<char> charList2;

  for (int x = 0; x < 10; ++x)
    charList2.push_front(66 + x);

  std::cout << "\n\tlist 1: ";
  std::list<char>::iterator iter;
  for (iter = charList1.begin(); iter != charList1.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;

  std::cout << "\n\tlist 2: ";
  for (iter = charList2.begin(); iter != charList2.end(); iter++)
    std::cout << *iter;
  std::cout << std::endl;

  if (charList1 == charList2)
    std::cout << "\n\tlist1 == list2";
  else if (charList1 < charList2)
    std::cout << "\n\tlist1 < list2";
  else if (charList1 > charList2)
    std::cout << "\n\tlist1 > list2";

  std::cout << std::endl;
  return 0;
}
