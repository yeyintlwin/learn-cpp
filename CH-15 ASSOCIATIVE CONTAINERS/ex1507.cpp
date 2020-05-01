// Listing 15.7: Adding elements to a multiset
#include <iostream>
#include <set>

int main()
{
  std::multiset<char> charMultiset;

  charMultiset.insert('E');
  charMultiset.insert('D');
  charMultiset.insert('C');
  charMultiset.insert('B');
  charMultiset.insert('A');
  charMultiset.insert('B');
  charMultiset.insert('D');

  std::cout << "\n\tContents of multiset:\n";
  std::multiset<char>::iterator iter;
  for (iter = charMultiset.begin(); iter != charMultiset.end(); iter++)
    std::cout << '\t' << *iter << std::endl;
  return 0;
}
