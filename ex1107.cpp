// Listing 11.7: A Linked-list of integers
#include <iostream>
#include "linklist.h"

int main()
{
  LinkedList<int> IntList;
  for (int i = 0; i < 10; i++)
    IntList.AppendEntry(i);

  int *ip = IntList.FirstEntry();
  std::cout << "\n\t";

  while (ip)
  {
    std::cout << *ip << ' ';
    if (*ip == 0 || *ip == 5 || *ip == 8)
      IntList.RemoveEntry();
    ip = IntList.NextEntry();
  }

  std::cout << "\n\n\t";
  while ((ip = IntList.NextEntry()) != 0)
    std::cout << *ip << ' ';

  std::cout << std::endl;
  return 0;
}
