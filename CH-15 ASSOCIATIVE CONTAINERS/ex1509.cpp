// Listing 15.9: Searching a multiset
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

  // Find the first D.
  iter = charMultiset.find('D');
  if (iter == charMultiset.end())
    std::cout << "\tElement not found.";
  else
  {
    std::cout << "\tElement found: " << *iter++ << std::endl;
    std::cout << "\tNext element: " << *iter;
  }
  std::cout << std::endl;

  return 0;
}
