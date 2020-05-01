// Listing 15.10: Comparing multisets
#include <iostream>
#include <set>

int main()
{
  std::multiset<char> charMultiset1;
  charMultiset1.insert('E');
  charMultiset1.insert('D');
  charMultiset1.insert('C');
  charMultiset1.insert('B');
  charMultiset1.insert('A');
  charMultiset1.insert('B');
  charMultiset1.insert('D');

  std::cout << "\n\tContents of first multiset:\n";
  std::multiset<char>::iterator iter;
  for (iter = charMultiset1.begin(); iter != charMultiset1.end(); iter++)
    std::cout << '\t' << *iter << std::endl;
  std::cout << std::endl;

  std::multiset<char> charMultiset2;
  charMultiset2.insert('J');
  charMultiset2.insert('I');
  charMultiset2.insert('H');
  charMultiset2.insert('G');
  charMultiset2.insert('F');
  charMultiset2.insert('G');
  charMultiset2.insert('I');

  std::cout << "\n\tContents of second multiset:\n";
  for (iter = charMultiset2.begin(); iter != charMultiset2.end(); iter++)
    std::cout << '\t' << *iter << std::endl;
  std::cout << std::endl;

  // Compare the sets.
  if (charMultiset1 == charMultiset2)
    std::cout << "\tset1 == set2";
  else if (charMultiset1 < charMultiset2)
    std::cout << "\tset1 < set2";
  else
    std::cout << "\tset1 > set2";
  std::cout << std::endl;

  return 0;
}
