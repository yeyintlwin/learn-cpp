// Listing 15.1: Creating a simple set
#include <iostream>
#include <set>

int main()
{
  // Create the set object
  std::set<int> intSet;

  // Populate the set with values.
  intSet.insert(10);
  intSet.insert(5);
  intSet.insert(1);
  intSet.insert(3);
  intSet.insert(8);

  // Display the contents of the set.
  std::cout << "\n\tContents of set:\n";
  std::set<int>::iterator iter;
  for (iter = intSet.begin(); iter != intSet.end(); iter++)
    std::cout << '\t' << *iter << std::endl;
  return 0;
}
