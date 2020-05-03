// Listing 16.2: Using the count() function
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
  // Create the set object.
  multiset<int, less<int>> intSet;
  intSet.insert(10);
  intSet.insert(8);
  intSet.insert(1);
  intSet.insert(3);
  intSet.insert(8);
  intSet.insert(8);
  intSet.insert(5);

  cout << "\n\tContents of set:\n";
  multiset<int, less<int>>::iterator it = intSet.begin();
  for (int x = 0; x < intSet.size(); x++)
    cout << '\t' << *it++ << endl;
  cout << endl;

  // Count the number of 8s in the set.
  int cnt = count(intSet.begin(), intSet.end(), 8);
  cout << "\n\tNumber of 8s = " << cnt << endl;

  return 0;
}
