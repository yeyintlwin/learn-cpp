// Listing 16.4: Using the fill() function
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void showVal(int val)
{
  cout << '\t' << val << endl;
}

int main()
{
  vector<int> intVector; // Create the vector object.

  for (int x = 0; x < 6; ++x)
    intVector.push_back(x);
  cout << "\n\tContents of vector:\n";
  for_each(intVector.begin(), intVector.end(), showVal);

  // Fill vector with zeroes.
  fill(intVector.begin(), intVector.end() + 4, 0);

  // Display the contents of the new vector.
  cout << "\n\tContents of vector:\n";
  for_each(intVector.begin(), intVector.end(), showVal);

  return 0;
}
