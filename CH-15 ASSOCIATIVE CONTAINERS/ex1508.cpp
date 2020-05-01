// Listing 15.8: Removing multiset elements
#include <iostream>
#include <set>

int main()
{
  // Create the set object.
  std::multiset<char> charMultiset;

  // Populate the multiset with values.
  charMultiset.insert('E');
  charMultiset.insert('D');
  charMultiset.insert('C');
  charMultiset.insert('B');
  charMultiset.insert('A');
  charMultiset.insert('B');
  charMultiset.insert('D');

  // Display the contents of the multiset.
  std::cout << "\n\tContents of multiset:\n";
  std::multiset<char>::iterator iter;
  for (iter = charMultiset.begin(); iter != charMultiset.end(); iter++)
    std::cout << '\t' << *iter << std::endl;

  // Erase the multiset's second elements.
  iter = charMultiset.begin();
  charMultiset.erase(++iter);

  // Display the contents of the multiset.
  std::cout << "\n\tContents of new set:\n";
  for (iter = charMultiset.begin(); iter != charMultiset.end(); iter++)
    std::cout << '\t' << *iter << std::endl;

  return 0;
}
