// Listing 16.12: Using the accumulate() function
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void showVal(int val)
{
  cout << '\t' << val << endl;
}

int main()
{
  // Create and populate the vector object
  vector<int> intVec;
  for (int x = 1; x < 6; x++)
    intVec.push_back(x);

  // Display the contents of the vector
  cout << "\n\tContents of vector:\n";
  for_each(intVec.begin(), intVec.end(), showVal);
  cout << endl;

  // Calculate and display sum
  int result = accumulate(intVec.begin(), intVec.end(), 15);
  cout << "\tResult = " << result << endl;

  return 0;
}
