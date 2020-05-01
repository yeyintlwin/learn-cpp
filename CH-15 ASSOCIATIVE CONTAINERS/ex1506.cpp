// Listing 15.6: Crating a simple multiset class templete
#include <iostream>
#include <set>

int main()
{
  // Create the multiset object.
  std::multiset<int> intMultiset;

  intMultiset.insert(10);
  intMultiset.insert(5);
  intMultiset.insert(1);
  intMultiset.insert(3);
  intMultiset.insert(8);
  intMultiset.insert(5);
  intMultiset.insert(8);

  // Display the contents of the multiset.
  std::cout << "\n\tContents of multiset:\n";
  std::multiset<int>::iterator iter;
  for (iter = intMultiset.begin(); iter != intMultiset.end(); iter++)
    std::cout << '\t' << *iter << std::endl;
  return 0;
}
