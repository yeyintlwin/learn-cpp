// Listing 16.1: Using adjacent_find() function
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
  // Create the set of object.
  multiset<int, less<int>> intSet;
  intSet.insert(10);
  intSet.insert(3);
  intSet.insert(1);
  intSet.insert(3);
  intSet.insert(8);
  intSet.insert(8);
  intSet.insert(5);

  // Display the contents of the set.
  cout << "\n\tContents of set:\n";
  multiset<int, less<int>>::iterator it = intSet.begin();
  for (int x = 0; x < intSet.size(); x++)
    cout << '\t' << *it++ << endl;
  cout << endl;

  // Find the first pair of equal values.
  cout << "\n\tFirst matching pair:\n";
  it = adjacent_find(intSet.begin(), intSet.end());
  cout << '\t' << *it++ << endl;
  cout << '\t' << *it << endl;

  // Find the second pair of equal values.
  cout << "\n\tSecond matching pair:\n";
  it = adjacent_find(it, intSet.end());
  cout << '\t' << *it++ << endl;
  cout << '\t' << *it << endl;

  return 0;
}
